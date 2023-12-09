#include <iostream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include "IntrusoController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;
using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace AForge::Video;
using namespace AForge::Video::DirectShow;
using namespace System;
using namespace System::Windows;



IntrusoController::IntrusoController(){
	this->objConexion = gcnew SqlConnection();
}

void IntrusoController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void IntrusoController::CerrarConexionBD() {
	this->objConexion->Close();
}

void IntrusoController::BuscarDispositivos() {
    DispositivosDeVideo = gcnew FilterInfoCollection(FilterCategory::VideoInputDevice);
    if (DispositivosDeVideo->Count == 0)
        ExistenDispositivos = false;
    else {
        ExistenDispositivos = true;
        //CargarDispositivos(DispositivosDeVideo);
    }
}

void IntrusoController::TomarFoto() {
    /*// Enumerar los dispositivos de video disponibles
    array<FilterInfo^>^ videoDevices = VideoCaptureDevice::MonikerString::GetVideoCaptureDevices();
    if (videoDevices->Length == 0)
    {
        Console::WriteLine("No se encontraron dispositivos de video.");
    }
    else {
        // Seleccionar el primer dispositivo de video (puedes ajustar según tus necesidades)
        String^ selectedDeviceMoniker = videoDevices[0]->MonikerString;

        // Crear el dispositivo de captura de video
        VideoCaptureDevice^ videoSource = gcnew VideoCaptureDevice(selectedDeviceMoniker);

        // Configurar el evento para recibir los fotogramas capturados
        videoSource->NewFrame += gcnew AForge::Video::NewFrameEventHandler(OnNewFrame);

        // Iniciar la captura
        videoSource->Start();

        // Esperar un poco para que se capturen algunos fotogramas (puedes ajustar según tus necesidades)
        System::Threading::Thread::Sleep(5000);

        // Detener la captura
        videoSource->Stop();
    }*/
    BuscarDispositivos();
    if (ExistenDispositivos) {
        FuenteDeVideo = gcnew VideoCaptureDevice(DispositivosDeVideo[0]->MonikerString);
        //FuenteDeVideo->NewFrame += gcnew NewFrameEventHandler(video_NuevoFrame);
        FuenteDeVideo->Start();
        System::Threading::Thread::Sleep(5000);
        FuenteDeVideo->SignalToStop();
        //btnIniciar->Text = "Detener";
        //cboDispositivos->Enabled = false;
    }
    else {
        //MessageBox::Show("Error: No se encuentra dispositivo.");
    }
}

void IntrusoController::OnNewFrame(Object^ sender, AForge::Video::NewFrameEventArgs^ eventArgs){
    /*// Obtener el fotograma capturado
    Bitmap^ frame = static_cast<Bitmap^>(eventArgs->Frame->Clone());

    // Guardar el fotograma en un archivo (puedes ajustar la ruta según tus necesidades)
    String^ filePath = "C:\\ruta\\a\\tu\\archivo\\captura_camara.png";
    frame->Save(filePath, Imaging::ImageFormat::Png);

    // Mostrar la dirección del archivo
    Console::WriteLine("Captura de cámara guardada en: " + filePath);*/
}

void video_NuevoFrame(Object^ sender, NewFrameEventArgs^ eventArgs) {
    Bitmap^ frame = static_cast<Bitmap^>(eventArgs->Frame->Clone());
    // Guardar el fotograma en un archivo (puedes ajustar la ruta según tus necesidades)
    String^ filePath = "C:\\Users\\cmose\\OneDrive\\Escritorio\\captura_camara.png";
    frame->Save(filePath, Imaging::ImageFormat::Png);

    // Mostrar la dirección del archivo
    Console::WriteLine("Captura de cámara guardada en: " + filePath);
}
