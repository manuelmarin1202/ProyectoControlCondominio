#pragma once

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;

	/// <summary>
	/// Resumen de frmAceptarCambios
	/// </summary>
	public ref class frmAceptarCambios : public System::Windows::Forms::Form
	{
	public:
		frmAceptarCambios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAceptarCambios(Usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAceptarCambios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Datos;
	protected:
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;


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

	private: Usuario^ objUsuario;
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
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->Controls->Add(this->textBox8);
			this->Datos->Controls->Add(this->label8);
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
			this->Datos->Location = System::Drawing::Point(12, 49);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(399, 305);
			this->Datos->TabIndex = 3;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos del Usuario";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(217, 200);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(76, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Contraseña";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(217, 161);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(217, 126);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(217, 91);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(217, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAceptarCambios::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAceptarCambios::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Paterno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombres:";
			// 
			// frmAceptarCambios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(429, 394);
			this->Controls->Add(this->Datos);
			this->Name = L"frmAceptarCambios";
			this->Text = L"frmAceptarCambios";
			this->Load += gcnew System::EventHandler(this, &frmAceptarCambios::frmAceptarCambios_Load);
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void frmAceptarCambios_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text = this->objUsuario->getNombres();
		this->textBox3->Text = this->objUsuario->getApellidoPaterno();
		this->textBox4->Text = this->objUsuario->getApellidoMaterno();
		this->textBox5->Text = this->objUsuario->getDni();
		this->textBox8->Text = this->objUsuario->getContraseña();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objProyectoControl = gcnew UsuarioController();
		int fila = objProyectoControl->actualizarCambioDatos(objUsuario);
		objProyectoControl->cancelaPedidos(fila);
		MessageBox::Show("La solicitud ha sido rechazada");
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UsuarioController^ objProyectoControl = gcnew UsuarioController();
		objProyectoControl->actualizarUsuario(objUsuario);
		int fila = objProyectoControl->actualizarCambioDatos(objUsuario);
		objProyectoControl->cancelaPedidos(fila);
		MessageBox::Show("La solicitud ha sido aceptada");
		this->Close();
	}
};
}
