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
	/// Resumen de frmReporteNroEdificiosProyecto
	/// </summary>
	public ref class frmReporteNroEdificiosProyecto : public System::Windows::Forms::Form
	{
	public:
		frmReporteNroEdificiosProyecto(void)
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
		~frmReporteNroEdificiosProyecto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(20, 35);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(785, 75);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(445, 30);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReporteNroEdificiosProyecto::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(199, 36);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(198, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Departamento:";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Thistle;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(25, 126);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(779, 350);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// frmReporteNroEdificiosProyecto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(817, 564);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmReporteNroEdificiosProyecto";
			this->Text = L"frmReporteNroEdificiosProyecto";
			this->Load += gcnew System::EventHandler(this, &frmReporteNroEdificiosProyecto::frmReporteNroEdificiosProyecto_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Departamento = this->comboBox1->Text;//se obtiene el texto seleccionado
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		List<Proyecto^>^ listaProyectos = objProyectoController->buscarProyectos(Departamento);

		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listaProyectos->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaProyectos[i]->getCantEdificios());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaProyectos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaProyectos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaProyectos[i]->getCantEdificios());
		}
	}

	private: System::Void frmReporteNroEdificiosProyecto_Load(System::Object^ sender, System::EventArgs^ e) {
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		List<Proyecto^>^ listaProyectos = objProyectoController->buscarAll();

		for (int i = 0; i < listaProyectos->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaProyectos[i]->getCantEdificios());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaProyectos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaProyectos[i]->getNombre();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaProyectos[i]->getCantEdificios());
		}
		List<String^>^ listaDepartamentos = objProyectoController->obtenerDepartamentos();
		this->comboBox1->Items->Clear();
		for (int i = 0; i < listaDepartamentos->Count; i++) {
			this->comboBox1->Items->Add(listaDepartamentos[i]);
		}
	}
};
}
