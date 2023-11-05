#pragma once
#include "frmPrincipal.h"
#include "frmConfirmacionAdmin.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmIngresoAdmin
	/// </summary>
	public ref class frmIngresoAdmin : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ FondoTotal = gcnew Bitmap("fondoEntradaAdmin.jpg");
	public:
		frmIngresoAdmin(void)
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
		~frmIngresoAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::ComponentModel::IContainer^ components;

	protected:







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmIngresoAdmin::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::WindowText;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(333, 316);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(107, 18);
			this->linkLabel1->TabIndex = 15;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Regístrate";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmIngresoAdmin::linkLabel1_LinkClicked_1);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmIngresoAdmin::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GrayText;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(531, 70);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::WindowText;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(15, 314);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"¿No tienes una cuenta\?";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(183, 224);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 41);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmIngresoAdmin::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 59);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 22);
			this->textBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::WindowText;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(14, 141);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Contraseña:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::WindowText;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(14, 59);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Usuario:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(288, 139);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 22);
			this->textBox2->TabIndex = 11;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// frmIngresoAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(845, 441);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Name = L"frmIngresoAdmin";
			this->Text = L"frmIngresoAdmin";
			this->Load += gcnew System::EventHandler(this, &frmIngresoAdmin::frmIngresoAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		
	}
	private: System::Void frmIngresoAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ Espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ Buffer = Espacio->Allocate(g, this->ClientRectangle);
		Buffer->Graphics->DrawImage(FondoTotal, 0, 0, (int)Buffer->Graphics->VisibleClipBounds.Width, (int)Buffer->Graphics->VisibleClipBounds.Height);
		Buffer->Render(g);
		delete Buffer;
		delete Espacio;
		delete g;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ usuarioAdmin = this->textBox1->Text;
		String^ contraAdmin = this->textBox2->Text;
		AdminController^ objAdminController = gcnew AdminController();
		int existe = objAdminController->ConfirmarAdmin(usuarioAdmin, contraAdmin);
		if (existe) {
			frmPrincipal^ ventanaPrincipal = gcnew frmPrincipal();
			MessageBox::Show("¡Bienvenido administrador!");
			//this->Close();
			ventanaPrincipal->Show();
		}
		else {
			MessageBox::Show("Este usuario y contraseña no existen");
		}
	}
	private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		frmConfirmacionAdmin^ ventanaConfirmaAdmin = gcnew frmConfirmacionAdmin();
		ventanaConfirmaAdmin->Show();
	}
};
}
