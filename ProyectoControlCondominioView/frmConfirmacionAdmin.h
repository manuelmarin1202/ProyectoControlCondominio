#pragma once
#include "frmRegistroAdmin.h"
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


	/// <summary>
	/// Resumen de frmConfirmacionAdmin
	/// </summary>
	public ref class frmConfirmacionAdmin : public System::Windows::Forms::Form
	{
	public:
		frmConfirmacionAdmin(void)
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
		~frmConfirmacionAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfirmacionAdmin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Escribir contraseña universal del administrador:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(150, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->Location = System::Drawing::Point(91, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmConfirmacionAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button2->Location = System::Drawing::Point(278, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmConfirmacionAdmin::button2_Click);
			// 
			// frmConfirmacionAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(466, 301);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"frmConfirmacionAdmin";
			this->Text = L"frmConfirmacionAdmin";
			this->Load += gcnew System::EventHandler(this, &frmConfirmacionAdmin::frmConfirmacionAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ contraseñaUniversal = this->textBox1->Text;
		if (contraseñaUniversal == "Admin123123") {
			frmRegistroAdmin^ ventanaRegistroAdmin = gcnew frmRegistroAdmin();
			MessageBox::Show("Se ha confirmado la creacion de cuenta de administrador");
			ventanaRegistroAdmin->Show();
		}
		else {
			MessageBox::Show("No se ha podido crear una cuenta de administrador");
			
		}
		this->Close();
	}
	private: System::Void frmConfirmacionAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
