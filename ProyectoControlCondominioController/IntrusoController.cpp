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
	this->port = gcnew SerialPort();
	this->port->PortName = "COM6";
	this->port->BaudRate = 9600;
	this->port->ReadTimeout = 500;
	//this->port->dataTerminal
}

void IntrusoController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void IntrusoController::CerrarConexionBD() {
	this->objConexion->Close();
}

void IntrusoController::PrenderBuzzer() {
	this->port->Open();
	this->port->Write("E");
}

void IntrusoController::CerrarArduino() {
	this->port->Close();
}
