#pragma once
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <thread>
using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AForge::Video;
	using namespace AForge::Video::DirectShow;
	/// <summary>
	/// Resumen de frmConfigurarCamara
	/// </summary>
	public ref class frmConfigurarCamara : public System::Windows::Forms::Form
	{
	public:
		frmConfigurarCamara(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmConfigurarCamara()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: bool existenDispositivos = false;
	private: FilterInfoCollection^ misDispositivos;
	private: VideoCaptureDevice^ miCamara=nullptr;
	private: System::Windows::Forms::Button^ button2;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(21, 22);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1024, 90);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar cámara:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(665, 27);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmConfigurarCamara::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(253, 33);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(319, 27);
			this->comboBox1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 122);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1019, 419);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(852, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Capturar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmConfigurarCamara::button2_Click);
			// 
			// frmConfigurarCamara
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(1072, 568);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmConfigurarCamara";
			this->Text = L"frmConfigurarCamara";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmConfigurarCamara::frmConfigurarCamara_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmConfigurarCamara::frmConfigurarCamara_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmConfigurarCamara_Load(System::Object^ sender, System::EventArgs^ e) {
		CargaDispositivos();
	}
	public: void CargaDispositivos() {
		misDispositivos = gcnew FilterInfoCollection(FilterCategory::VideoInputDevice); 
		if (misDispositivos->Count > 0) {
			existenDispositivos= true;
			for (int i = 0; i < misDispositivos->Count; i++) {
				comboBox1->Items->Add(misDispositivos[i]->Name->ToString());
				comboBox1->Text = misDispositivos[0]->ToString();
			}
		}
		else {
			existenDispositivos = false;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (existenDispositivos) {
			miCamara = gcnew VideoCaptureDevice(misDispositivos[0]->MonikerString);
			miCamara->NewFrame += gcnew NewFrameEventHandler(this, &frmConfigurarCamara::video_NuevoFrame);
			miCamara->Start();
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
private: System::Void frmConfigurarCamara_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	//miCamara->SignalToStop();
	if (miCamara != nullptr)
		if (miCamara->IsRunning) {
			miCamara->SignalToStop();
			miCamara = nullptr;
		}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (miCamara != nullptr && miCamara->IsRunning) {
		// Tomar una captura del fotograma actual
		Bitmap^ captura = static_cast<Bitmap^>(pictureBox1->Image->Clone());

		// Guardar la captura en un archivo (puedes ajustar la ruta y el formato según tus necesidades)
		String^ rutaGuardar = "captura.jpg";
		captura->Save(rutaGuardar, Imaging::ImageFormat::Jpeg);

		MessageBox::Show("Captura guardada en: " + rutaGuardar, "Captura Exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Error: La cámara no está en funcionamiento.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
