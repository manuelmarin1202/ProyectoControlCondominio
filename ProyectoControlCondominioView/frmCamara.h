#pragma once
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <thread>

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
	using namespace AForge::Video::DirectShow;

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
			this->pictureBox1->Location = System::Drawing::Point(47, 67);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 364);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(256, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cámara";
			this->label1->Click += gcnew System::EventHandler(this, &frmCamara::label1_Click);
			// 
			// frmCamara
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 456);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
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
		
		if (ExistenDispositivos) {
			FuenteDeVideo = gcnew VideoCaptureDevice(DispositivosDeVideo[0]->MonikerString);
			FuenteDeVideo->NewFrame += gcnew NewFrameEventHandler(this, &frmCamara::video_NuevoFrame);
			FuenteDeVideo->Start();
		}
		else {
			MessageBox::Show("Error: No se encuentra dispositivo.");
		}
	}
	private: void video_NuevoFrame(Object^ sender, NewFrameEventArgs^ eventArgs) {
		//Debug::WriteLine("Nuevo frame recibido.");
		//debug
		Bitmap^ frame = static_cast<Bitmap^>(eventArgs->Frame->Clone());
		this->pictureBox1->Image = frame;	
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
