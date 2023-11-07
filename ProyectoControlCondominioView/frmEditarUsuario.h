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
	/// Resumen de frmEditarUsuario
	/// </summary>
	public ref class frmEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmEditarUsuario(Usuario^ objProyecto) {
			InitializeComponent();
			this->objProyecto = objProyecto;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
		private: Usuario^ objProyecto;//este atributo se agrega para manejar la informacion de usuarios
	private: System::Windows::Forms::GroupBox^ Datos;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->Controls->Add(this->textBox7);
			this->Datos->Controls->Add(this->label7);
			this->Datos->Controls->Add(this->label6);
			this->Datos->Controls->Add(this->textBox6);
			this->Datos->Controls->Add(this->textBox5);
			this->Datos->Controls->Add(this->textBox4);
			this->Datos->Controls->Add(this->textBox3);
			this->Datos->Controls->Add(this->textBox2);
			this->Datos->Controls->Add(this->textBox1);
			this->Datos->Controls->Add(this->button2);
			this->Datos->Controls->Add(this->button1);
			this->Datos->Controls->Add(this->label5);
			this->Datos->Controls->Add(this->label4);
			this->Datos->Controls->Add(this->label3);
			this->Datos->Controls->Add(this->label2);
			this->Datos->Controls->Add(this->label1);
			this->Datos->Location = System::Drawing::Point(24, 44);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(399, 320);
			this->Datos->TabIndex = 2;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos del Usuario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(72, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Nombre Foto:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(215, 207);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(215, 179);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(215, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(215, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(215, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(215, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(72, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Apellido Materno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellido Paterno:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombres:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(72, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Contraseña:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(215, 240);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 17;
			// 
			// frmEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 394);
			this->Controls->Add(this->Datos);
			this->Name = L"frmEditarUsuario";
			this->Text = L"frmEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &frmEditarUsuario::frmEditarUsuario_Load);
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objProyecto->getCodigoUsuario();
		this->textBox2->Text = this->objProyecto->getNombres();
		this->textBox3->Text = this->objProyecto->getApellidoPaterno();
		this->textBox4->Text = this->objProyecto->getApellidoMaterno();
		this->textBox5->Text = this->objProyecto->getDni();
		this->textBox6->Text = this->objProyecto->getNombreFoto();
		this->textBox7->Text = this->objProyecto->getContraseña();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codigo = this->textBox1->Text;
		String^ nombre = this->textBox2->Text;
		String^ apellidoPaterno = this->textBox3->Text;
		String^ apellidoMaterno = this->textBox4->Text;
		String^ dni = this->textBox5->Text;
		String^ nombreFoto = this->textBox6->Text;
		String^ contraseña = this->textBox7->Text;
		Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni, codigo, nombreFoto, contraseña);
		UsuarioController^ objProyectoControl = gcnew UsuarioController();
		objProyectoControl->actualizarUsuario(objProyecto);
		MessageBox::Show("El usuario se ha actualizado con éxito");
		this->Close();
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
