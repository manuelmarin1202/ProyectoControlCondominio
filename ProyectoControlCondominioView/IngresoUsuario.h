#pragma once
#include "frmVistaUsuario.h"
#include <msclr/marshal_cppstd.h>
#include "frmCamara.h"

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
	using namespace System::IO::Ports;
	/// <summary>
	/// Resumen de IngresoUsuario
	/// </summary>
	public ref class IngresoUsuario : public System::Windows::Forms::Form
	{
		SerialPort^ port;
	public:
		IngresoUsuario(void)
		{
			InitializeComponent();
			
			this->port = gcnew SerialPort();
			this->port->PortName = "COM6";
			this->port->BaudRate = 9600;
			this->port->ReadTimeout = 500;
			try {
				this->port->Open();
			}
			catch (Exception^ ex) {

			}
			
			//
			//TODO: agregar código de constructor aquí
			//
		}
		/*IngresoUsuario(int request)
		{
			InitializeComponent();
			this->request = request;
			//
			//TODO: agregar código de constructor aquí
			//
		}*/

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IngresoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: int cantErrores = 0;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	//private: int request;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IngresoUsuario::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GrayText;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(550, 157);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(189, 350);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 41);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &IngresoUsuario::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(317, 213);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 22);
			this->textBox1->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(66, 213);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Codigo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(199, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::WindowText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(66, 268);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 25);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Contraseña:";
			this->label2->Click += gcnew System::EventHandler(this, &IngresoUsuario::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(317, 268);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 22);
			this->textBox2->TabIndex = 27;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// IngresoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(883, 566);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"IngresoUsuario";
			this->Text = L"IngresoUsuario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &IngresoUsuario::IngresoUsuario_FormClosing);
			this->Load += gcnew System::EventHandler(this, &IngresoUsuario::IngresoUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cantErrores<2) {
		Usuario^ objUsuario = gcnew Usuario();
		String^ codigoVer = this->textBox1->Text;
		String^ contraseñaVer = this->textBox2->Text;
		UsuarioController^ objProyectoControl = gcnew UsuarioController();
		int existe = objProyectoControl->ConfirmarUsuario(codigoVer, contraseñaVer);

		//int existe2 = objProyectoControl->ConfirmarContra(codigoVer, contraseñaVer);
		if (existe == 1) {
			Usuario^ objUsuario = objProyectoControl->buscarUsuarioxCodigo(codigoVer);
			frmVistaUsuario^ ventanaVistaUsuario = gcnew frmVistaUsuario(objUsuario);//request
			MessageBox::Show("Bienvenido usuario!");
			try {
				this->port->Write("I");
				this->port->Close();
			}
			catch (Exception^ ex) {

			}
			ventanaVistaUsuario->ShowDialog();
		}
		else {
			MessageBox::Show("El usuario o la contraseña ingresados no son correctos");
			cantErrores++;

		}
	}
	else {
		frmCamara^ ventana = gcnew frmCamara();
		ventana->ShowDialog();
		this->Close();
		try {
			this->port->Write("E");
			this->port->Close();
		}
		catch (Exception^ ex) {

		}
	}
}



private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void IngresoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void IngresoUsuario_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
}
};
}
