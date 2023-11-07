#pragma once

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ProyectoControlCondominioModel;
	using namespace ProyectoControlCondominioController;

	/// <summary>
	/// Resumen de frmVerProyecto
	/// </summary>
	public ref class frmVerProyecto : public System::Windows::Forms::Form
	{
	public:
		frmVerProyecto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmVerProyecto(Proyecto^ objProyecto)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->objProyecto = objProyecto;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmVerProyecto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: Proyecto^ objProyecto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número de Edificios:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmVerProyecto::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 110);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Provincia:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Departamento:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(161, 266);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 25);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(161, 215);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 25);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmVerProyecto::textBox6_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Nombre:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Distrito:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Fecha Creación";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->pictureBox1->Location = System::Drawing::Point(350, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(288, 306);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(347, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Imagen del proyecto:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 25);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Cerrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerProyecto::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(451, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Cargar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerProyecto::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(161, 401);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Ver Lista Edificios";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(23, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(296, 359);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del proyecto";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(161, 319);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(112, 25);
			this->dateTimePicker1->TabIndex = 13;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// frmVerProyecto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Moccasin;
			this->ClientSize = System::Drawing::Size(676, 450);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmVerProyecto";
			this->Text = L"frmVerProyecto";
			this->Load += gcnew System::EventHandler(this, &frmVerProyecto::frmVerProyecto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void frmVerProyecto_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = this->objProyecto->getCodigo();
	this->textBox2->Text = Convert::ToString(this->objProyecto->getCantEdificios());
	this->textBox3->Text = this->objProyecto->getDepartamento();
	this->textBox4->Text = this->objProyecto->getProvincia();
	this->textBox5->Text = this->objProyecto->getDistrito();
	this->textBox6->Text = this->objProyecto->getNombre();
	this->dateTimePicker1->Text = this->objProyecto->getFechaCreacion();
	this->pictureBox1->Image = Image::FromFile(this->objProyecto->getNombreFoto());
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ nombreArchivo = this->openFileDialog1->FileName;
		this->pictureBox1->Image = Image::FromFile(nombreArchivo);
		ProyectoController^ objProyectoControl = gcnew ProyectoController();
		String^ nombreRealFoto = objProyectoControl->obtenerNombreFoto(nombreArchivo);
		nombreArchivo = nombreRealFoto;
		this->objProyecto->setNombreFoto(nombreArchivo);
		String^ codigoProyecto = this->textBox1->Text;
		int cantEdificios = Convert::ToInt32(this->textBox2->Text);
		String^ departamento = this->textBox3->Text;
		String^ provincia = this->textBox4->Text;
		String^ distrito = this->textBox5->Text;
		String^ nombre = this->textBox6->Text;
		String^ fechaCreacion = this->dateTimePicker1->Text;
		String^ nombreFoto = nombreArchivo;
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		objProyecto = gcnew Proyecto(codigoProyecto, cantEdificios, departamento, provincia, distrito, nombre, fechaCreacion, nombreFoto, listaEdificios);
		objProyectoControl->actualizarProyecto(objProyecto);
		MessageBox::Show("La imagen se ha cargado con exito");
	}
}
};
}
