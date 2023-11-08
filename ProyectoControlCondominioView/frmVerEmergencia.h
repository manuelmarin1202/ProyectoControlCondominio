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
	/// Resumen de frmVerEmergencia
	/// </summary>
	public ref class frmVerEmergencia : public System::Windows::Forms::Form
	{
	public:
		frmVerEmergencia(void)
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
		~frmVerEmergencia()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->Datos->Controls->Add(this->textBox5);
			this->Datos->Controls->Add(this->textBox4);
			this->Datos->Controls->Add(this->textBox3);
			this->Datos->Controls->Add(this->textBox2);
			this->Datos->Controls->Add(this->textBox1);
			this->Datos->Controls->Add(this->button2);
			this->Datos->Controls->Add(this->label5);
			this->Datos->Controls->Add(this->label4);
			this->Datos->Controls->Add(this->label3);
			this->Datos->Controls->Add(this->label2);
			this->Datos->Controls->Add(this->label1);
			this->Datos->Location = System::Drawing::Point(43, 62);
			this->Datos->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Datos->Name = L"Datos";
			this->Datos->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Datos->Size = System::Drawing::Size(449, 381);
			this->Datos->TabIndex = 4;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos de la Emergencia:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(242, 224);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 26);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(242, 184);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 26);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(242, 144);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 26);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 108);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 26);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(242, 72);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 26);
			this->textBox1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 303);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerEmergencia::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Hora:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(81, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fecha:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ubicación:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID:";
			// 
			// frmVerEmergencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 504);
			this->Controls->Add(this->Datos);
			this->Name = L"frmVerEmergencia";
			this->Text = L"frmVerEmergencia";
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
