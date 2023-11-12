#pragma once
#include "Windows.h"


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
	/// Resumen de frmEmergencia
	/// </summary>
	public ref class frmEmergencia : public System::Windows::Forms::Form
	{
	public:
		frmEmergencia(void)
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
		~frmEmergencia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"RomanC", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(29, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 280);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de la emergencia";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(258, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEmergencia::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 34);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEmergencia::button1_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(276, 160);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 27);
			this->comboBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Codigo de Edificio:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(276, 104);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEmergencia::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre Condominio:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Policía", L"Bomberos", L"Ambulancia" });
			this->comboBox1->Location = System::Drawing::Point(276, 59);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 27);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo:";
			// 
			// frmEmergencia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(517, 344);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEmergencia";
			this->Text = L"frmEmergencia";
			this->Load += gcnew System::EventHandler(this, &frmEmergencia::frmEmergencia_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void frmEmergencia_Load(System::Object^ sender, System::EventArgs^ e) {
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		List<Proyecto^>^ listaProyectos = objProyectoController->buscarAll();
		List<String^>^ listaNombres = gcnew List<String^>();
		for (int i = 0; i < listaProyectos->Count; i++) {
			listaNombres->Add(listaProyectos[i]->getNombre());
		}
		this->comboBox2->Items->Clear();
		for (int i = 0; i < listaNombres->Count; i++) {
			this->comboBox2->Items->Add(listaNombres[i]);
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreProyecto = this->comboBox2->Text;
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		Proyecto^ objProyecto = objProyectoController->buscarProyectoxNombre(nombreProyecto);
		String^ codigoProyecto = objProyecto->getCodigo();
		EdificioController^ objEdificioController = gcnew EdificioController();
		List<Edificio^>^ listaEdificios = objEdificioController->buscarEdificios(codigoProyecto);
		List<String^>^ listaCodigos = gcnew List<String^>();
		for (int i = 0; i < listaEdificios->Count; i++) {
			listaCodigos->Add(Convert::ToString(listaEdificios[i]->getCodigo()));
		}
		this->comboBox3->Items->Clear();
		for (int i = 0; i < listaCodigos->Count; i++) {
			this->comboBox3->Items->Add(listaCodigos[i]);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime now = DateTime::Now;
		String^ fechaActual = now.ToString("dd-MM-yyyy");  
		String^ horaActual = now.ToString("HH:mm:ss");
		String^ tipo = this->comboBox1->Text;
		String^ nombreProyecto = this->comboBox2->Text;
		String^ codigoEdificio = this->comboBox3->Text;
		String^ ubicacion = nombreProyecto + "-"+codigoEdificio;
		Emergencia^ objEmergencia = gcnew Emergencia(1,tipo,ubicacion,fechaActual,horaActual);
		EmergenciaController^ objEmergenciaController = gcnew EmergenciaController();
		objEmergenciaController->agregarEmergencia(objEmergencia);
		this->Close();
	}
};
}
