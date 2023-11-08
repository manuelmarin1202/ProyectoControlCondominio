#pragma once
#include<stdlib.h>
#include<time.h>

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioModel;
	using namespace ProyectoControlCondominioController;

	/// <summary>
	/// Resumen de frmNuevoUsuario
	/// </summary>
	public ref class frmNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoUsuario(void)
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
		~frmNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Datos;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;

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
			this->Datos = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->Controls->Add(this->textBox1);
			this->Datos->Controls->Add(this->label7);
			this->Datos->Controls->Add(this->checkBox2);
			this->Datos->Controls->Add(this->checkBox1);
			this->Datos->Controls->Add(this->textBox6);
			this->Datos->Controls->Add(this->label6);
			this->Datos->Controls->Add(this->textBox5);
			this->Datos->Controls->Add(this->textBox4);
			this->Datos->Controls->Add(this->textBox3);
			this->Datos->Controls->Add(this->textBox2);
			this->Datos->Controls->Add(this->button2);
			this->Datos->Controls->Add(this->button1);
			this->Datos->Controls->Add(this->label5);
			this->Datos->Controls->Add(this->label4);
			this->Datos->Controls->Add(this->label3);
			this->Datos->Controls->Add(this->label2);
			this->Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Datos->Location = System::Drawing::Point(17, 12);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(399, 316);
			this->Datos->TabIndex = 1;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos del Usuario";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(213, 50);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(84, 20);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Invitado";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(75, 50);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 20);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Residente";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(213, 216);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Nombre Foto:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(213, 183);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(213, 151);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(213, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(213, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(70, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Paterno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombres:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Contraseña:";
			this->label1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::label1_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(213, 250);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(213, 249);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 19;
			// 
			// frmNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 390);
			this->Controls->Add(this->Datos);
			this->Name = L"frmNuevoUsuario";
			this->Text = L"frmNuevoUsuario";
			this->Load += gcnew System::EventHandler(this, &frmNuevoUsuario::frmNuevoUsuario_Load);
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ prefijo;
		if (this->checkBox1->CheckState == CheckState::Checked) {
			prefijo = "R";
		}
		else if (this->checkBox2->CheckState == CheckState::Checked) {
			prefijo = "I";
		}
		else {
			prefijo = "R";
		}
		String^ codigo = prefijo + Convert::ToString(rand() % 1000);
		String^ nombre = this->textBox2->Text;
		String^ apellidoPaterno = this->textBox3->Text;
		String^ apellidoMaterno = this->textBox4->Text;
		String^ dni = this->textBox5->Text;
		String^ nombreFoto = this->textBox6->Text;
		String^ contraseña = this->textBox1->Text;
		Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni, codigo, nombreFoto, contraseña);
		UsuarioController^ objProyectoControl = gcnew UsuarioController();
		objProyectoControl->agregarProyecto_2(objProyecto);
		MessageBox::Show("El Usuario se ha agregado con éxito");
		this->Close(); /*Esta linea cierra la ventana actual*/
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Allasi pagara por su insolencia
		//bdshbsjbds
		
		this->Close();
	}
	private: System::Void frmNuevoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		//String^ codigoProyecto = "r"+ Convert::ToString(rand() % 1000);
		//this->textBox1->Text = codigoProyecto;?????????????????????????????????
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
