#pragma once
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <thread>
//#include <AForge.Video.h>
namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioController;
	using namespace System::Collections::Generic;
	using namespace ProyectoControlCondominioModel;
	using namespace AForge::Video;
	using namespace System::IO;
	using namespace System::Drawing::Imaging;
	using namespace AForge::Video::DirectShow;
	using namespace System::Diagnostics;
	/// <summary>
	/// Resumen de frmCamara
	/// </summary>
	public ref class frmCamara : public System::Windows::Forms::Form
	{
	public:
		frmCamara(void)
		{
			InitializeComponent();
			BuscarDispositivos();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmCamara()
		{
			if (components)
			{
				delete components;
			}
		}
	//Camara Manuel
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: bool ExistenDispositivos = false;
	private: FilterInfoCollection^ DispositivosDeVideo;
	private: VideoCaptureDevice^ FuenteDeVideo = nullptr;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(53, 84);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(548, 455);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Swis721 BlkEx BT", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(288, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cámara";
			this->label1->Click += gcnew System::EventHandler(this, &frmCamara::label1_Click);
			// 
			// frmCamara
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(665, 570);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmCamara";
			this->Text = L"frmCamara";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &frmCamara::frmCamara_FormClosed);
			this->Load += gcnew System::EventHandler(this, &frmCamara::frmCamara_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCamara_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTime now = DateTime::Now;
		
		IntrusoController^ objIntrusoController = gcnew IntrusoController();
		int id = 1;
		if (ExistenDispositivos) {
			FuenteDeVideo = gcnew VideoCaptureDevice(DispositivosDeVideo[0]->MonikerString);
			FuenteDeVideo->NewFrame += gcnew AForge::Video::NewFrameEventHandler(this, &frmCamara::video_NuevoFrame);
			FuenteDeVideo->Start();
			System::Threading::Thread::Sleep(3000);
			if (FuenteDeVideo != nullptr && FuenteDeVideo->IsRunning) {
				// Tomar una captura del fotograma actual
				Bitmap^ captura = static_cast<Bitmap^>(pictureBox1->Image->Clone());
				// Guardar la captura en un archivo 	
				List<Intruso^>^ listaIntrusos = objIntrusoController->buscarAll();
				int cantIntrusos = listaIntrusos->Count;
				//String^ rutaGuardar = "captura.jpg";
				String^ rutaGuardar = String::Format("captura_{0:yyyyMMddHHmmss}.jpg", now);
				String^ fechaActual = now.ToString("dd/MM/yyyy");
				String^ horaActual = now.ToString("HH:mm:ss");
				captura->Save(rutaGuardar, Imaging::ImageFormat::Jpeg);	
				Intruso^ objIntruso = gcnew Intruso(id,fechaActual,horaActual,rutaGuardar);
				objIntrusoController->agregarIntruso(objIntruso);
			}
			else {
				MessageBox::Show("Error: La cámara no está en funcionamiento.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			TerminarFuenteDeVideo();
			this->Close();
		}
		else {
			MessageBox::Show("Error: No se encuentra dispositivo.");
		}
	}

	private: void BuscarDispositivos() {
		DispositivosDeVideo = gcnew FilterInfoCollection(FilterCategory::VideoInputDevice);
		if (DispositivosDeVideo->Count == 0)
			ExistenDispositivos = false;
		else {
			ExistenDispositivos = true;
		}
	}
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		

	}
	private: void video_NuevoFrame(System::Object^ sender, AForge::Video::NewFrameEventArgs^ eventArgs) {
		try {
			Debug::WriteLine("Nuevo frame recibido.");  // Mensaje de depuración
			Bitmap^ frame = static_cast<Bitmap^>(eventArgs->Frame->Clone());
			this->pictureBox1->Image = frame;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error en video_NuevoFrame: " + ex->Message);
		}
	}
private: System::Void frmCamara_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	TerminarFuenteDeVideo();
}
	 private: void TerminarFuenteDeVideo() {
		   if (FuenteDeVideo != nullptr)
			   if (FuenteDeVideo->IsRunning) {
				   FuenteDeVideo->SignalToStop();
				   FuenteDeVideo = nullptr;
			   }
	}
};
}
