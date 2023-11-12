#pragma once

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
	/// Resumen de frmNuevoEdificio
	/// </summary>
	public ref class frmNuevoEdificio : public System::Windows::Forms::Form
	{
	public:
		frmNuevoEdificio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevoEdificio(Proyecto^ objProyecto)
		{
			InitializeComponent();
			this->objProyecto = objProyecto;
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoEdificio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Datos;
	protected:







	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Proyecto^ objProyecto;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNuevoEdificio::typeid));
			this->Datos = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Datos->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Datos.BackgroundImage")));
			this->Datos->Controls->Add(this->textBox2);
			this->Datos->Controls->Add(this->textBox1);
			this->Datos->Controls->Add(this->button2);
			this->Datos->Controls->Add(this->button1);
			this->Datos->Controls->Add(this->label2);
			this->Datos->Controls->Add(this->label1);
			this->Datos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Datos->Location = System::Drawing::Point(34, 24);
			this->Datos->Name = L"Datos";
			this->Datos->Size = System::Drawing::Size(388, 181);
			this->Datos->TabIndex = 1;
			this->Datos->TabStop = false;
			this->Datos->Text = L"Datos del Edificio";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(205, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoEdificio::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoEdificio::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cantidad Pisos:";
			this->label2->Click += gcnew System::EventHandler(this, &frmNuevoEdificio::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aforo:";
			// 
			// frmNuevoEdificio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 230);
			this->Controls->Add(this->Datos);
			this->Name = L"frmNuevoEdificio";
			this->Text = L"frmNuevoEdificio";
			this->Datos->ResumeLayout(false);
			this->Datos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = 1;
		int aforo = Convert::ToInt32(this->textBox1->Text);
		int cantPisos = Convert::ToInt32(this->textBox2->Text);
		String^ codigoProyecto = objProyecto->getCodigo();
		Edificio^ objEdificio = gcnew Edificio(cantPisos, aforo, codigo, codigoProyecto);
		EdificioController^ objEdificioController = gcnew EdificioController();
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		int existe = objProyectoController->existeCodigo(codigoProyecto);
		if (existe) {
			ProyectoController^ objProyectoController = gcnew ProyectoController();
			objProyectoController->actualizarProyecto(objProyecto);
		}
		else{
			ProyectoController^ objProyectoController = gcnew ProyectoController();
			objProyectoController->agregarProyecto(objProyecto);
		}
		objEdificioController->agregarEdificio(objEdificio);
		this->Close();
	}
};
}
