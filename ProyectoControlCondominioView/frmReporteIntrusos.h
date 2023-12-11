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
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmReporteIntrusos
	/// </summary>
	public ref class frmReporteIntrusos : public System::Windows::Forms::Form
	{
	public:
		frmReporteIntrusos(void)
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
		~frmReporteIntrusos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Thistle;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(28, 118);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(779, 350);
			this->chart1->TabIndex = 7;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(23, 27);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(785, 75);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(448, 38);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(129, 27);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(341, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Fecha Fin:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(159, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(129, 27);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(634, 37);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmReporteIntrusos::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha Inicio:";
			// 
			// frmReporteIntrusos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(830, 492);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmReporteIntrusos";
			this->Text = L"frmReporteIntrusos";
			this->Load += gcnew System::EventHandler(this, &frmReporteIntrusos::frmReporteIntrusos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inicio = this->dateTimePicker1->Text;
		String^ fin = this->dateTimePicker2->Text;
		//EmergenciaController^ objEmergenciaController = gcnew EmergenciaController();
		IntrusoController^ objIntrusoController = gcnew IntrusoController();
		List<Intruso^>^ listaIntrusos = objIntrusoController->buscarIntrusosxFechas(inicio,fin);
		//List<Emergencia^>^ listEmergencias = objEmergenciaController->buscarEmergenciaxFecha(fecha);
		List<String^>^ listFechas = objIntrusoController->getListaFechas(listaIntrusos);
		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listFechas->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(Convert::ToInt32(objIntrusoController->cantidadIntrusosxFecha(listFechas[i])));
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listFechas[i];
			this->chart1->Series["Series1"]->Points[i]->LegendText = listFechas[i];
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(objIntrusoController->cantidadIntrusosxFecha(listFechas[i]));
		}
	}
	private: System::Void frmReporteIntrusos_Load(System::Object^ sender, System::EventArgs^ e) {
		//EmergenciaController^ objEmergenciaController = gcnew EmergenciaController();
		IntrusoController^ objIntrusoController = gcnew IntrusoController();
		List<Intruso^>^ listaIntrusos = objIntrusoController->buscarAll();
		//List<Emergencia^>^ listEmergencias = objEmergenciaController->buscarEmergenciaxFecha(fecha);
		List<String^>^ listFechas = objIntrusoController->getListaFechas(listaIntrusos);
		this->chart1->Series["Series1"]->Points->Clear();
		for (int i = 0; i < listFechas->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(Convert::ToInt32(objIntrusoController->cantidadIntrusosxFecha(listFechas[i])));
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listFechas[i];
			this->chart1->Series["Series1"]->Points[i]->LegendText = listFechas[i];
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(objIntrusoController->cantidadIntrusosxFecha(listFechas[i]));
		}
	}
};
}
