#pragma once
#include "SolicitudCambioDato.h"
#include "frmEmergencia.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Collections::Generic;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;

	/// <summary>
	/// Resumen de frmVistaUsuario
	/// </summary>
	public ref class frmVistaUsuario : public System::Windows::Forms::Form
	{
	public:
		frmVistaUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		frmVistaUsuario(Usuario^ objUsuario){//int request {
			InitializeComponent();
			this->objUsuario = objUsuario;
			//this->request = request;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmVistaUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: Usuario^ objUsuario;
	//private: int request;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pictureBox1->Location = System::Drawing::Point(464, 94);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(371, 385);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(65, 504);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 29);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVistaUsuario::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(459, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Foto del Usuario:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(436, 447);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Personales";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(193, 340);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(175, 27);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(193, 277);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(175, 27);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(193, 213);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(175, 27);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(193, 151);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(175, 27);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(193, 87);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(175, 27);
			this->textBox1->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 19);
			this->label6->TabIndex = 4;
			this->label6->Text = L"DNI:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Apellido Materno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 19);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Apellido Paterno:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Codigo:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(554, 504);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 29);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Solicitar cambio de datos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVistaUsuario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(216, 507);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 26);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Emergencias";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVistaUsuario::button3_Click);
			// 
			// frmVistaUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(867, 560);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmVistaUsuario";
			this->Text = L"frmVistaUsuario";
			this->Load += gcnew System::EventHandler(this, &frmVistaUsuario::frmVistaUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmVistaUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = this->objUsuario->getCodigoUsuario();
		this->textBox2->Text = this->objUsuario->getNombres();
		this->textBox3->Text = this->objUsuario->getApellidoPaterno();
		this->textBox4->Text = this->objUsuario->getApellidoMaterno();
		this->textBox5->Text = this->objUsuario->getDni();
		this->pictureBox1->Image = Image::FromFile(this->objUsuario->getNombreFoto());
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codigoVer = this->textBox1->Text;
	UsuarioController^ objUsuarioControl = gcnew UsuarioController();
	Usuario^ objUsuario = objUsuarioControl->buscarUsuarioxCodigo(codigoVer);
	
	SolicitudCambioDato^ ventanaSolicitudCambioDato = gcnew SolicitudCambioDato(objUsuario);
	ventanaSolicitudCambioDato->ShowDialog();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEmergencia^ ventanaEmergencia = gcnew frmEmergencia();
	ventanaEmergencia->ShowDialog();
}
};
}
