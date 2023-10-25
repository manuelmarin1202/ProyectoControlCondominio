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
	using namespace System::Collections::Generic;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;

	/// <summary>
	/// Resumen de frmNuevoProyecto
	/// </summary>
	public ref class frmNuevoProyecto : public System::Windows::Forms::Form
	{
	public:
		frmNuevoProyecto(void)
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
		~frmNuevoProyecto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Datos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

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
			this->Datos = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->Controls->Add(this->textBox6);
			this->Datos->Controls->Add(this->textBox5);
			this->Datos->Controls->Add(this->textBox4);
			this->Datos->Controls->Add(this->textBox3);
			this->Datos->Controls->Add(this->textBox2);
			this->Datos->Controls->Add(this->textBox1);
			this->Datos->Controls->Add(this->dateTimePicker1);
			this->Datos->Controls->Add(this->button2);
			this->Datos->Controls->Add(this->button1);
			this->Datos->Controls->Add(this->label7);
			this->Datos->Controls->Add(this->label6);
			this->Datos->Controls->Add(this->label5);
			this->Datos->Controls->Add(this->label4);
			this->Datos->Controls->Add(this->label3);
			this->Datos->Controls->Add(this->label2);
			this->Datos->Controls->Add(this->label1);
			this->Datos->Location = System::Drawing::Point(29, 30);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(399, 305);
			this->Datos->TabIndex = 0;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos del Proyecto";
			this->Datos->Enter += gcnew System::EventHandler(this, &frmNuevoProyecto::groupBox1_Enter);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(183, 188);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(183, 156);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(183, 124);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(183, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(166, 221);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoProyecto::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(91, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoProyecto::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"FechaCreacion:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(40, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Nombre:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Distrito:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Provincia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Departamento:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CantEdificios:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			this->label1->Click += gcnew System::EventHandler(this, &frmNuevoProyecto::label1_Click);
			// 
			// frmNuevoProyecto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 371);
			this->Controls->Add(this->Datos);
			this->Name = L"frmNuevoProyecto";
			this->Text = L"Nuevo Proyecto";
			this->Load += gcnew System::EventHandler(this, &frmNuevoProyecto::frmNuevoProyecto_Load);
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmNuevoProyecto_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ codigoProyecto = Convert::ToString(rand() % 100);
		this->textBox1->Text = codigoProyecto;
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ codigoProyecto = this->textBox1->Text;
		int cantEdificios = Convert::ToInt32(this->textBox2->Text);
		String^ departamento = this->textBox3->Text;
		String^ provincia = this->textBox4->Text;
		String^ distrito = this->textBox5->Text;
		String^ nombre = this->textBox6->Text;
		String^ fechaCreacion = this->dateTimePicker1->Text;
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		Proyecto^ objetoProyecto = gcnew Proyecto(codigoProyecto, cantEdificios, departamento, provincia, distrito, nombre, fechaCreacion,listaEdificios);
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		objProyectoController->agregarProyecto(objetoProyecto);
		MessageBox::Show("El proyecto se ha agregado con exito");
		this->Close();
	}
};
}
