#pragma once
#include "frmVerIntruso.h"
#include "frmEditarIntruso.h"


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
	/// Resumen de frmRegistroIntrusos
	/// </summary>
	public ref class frmRegistroIntrusos : public System::Windows::Forms::Form
	{
	public:
		frmRegistroIntrusos(void)
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
		~frmRegistroIntrusos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;




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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 47);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(529, 241);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(258, 318);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 26);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmRegistroIntrusos::button5_Click);
			// 
			// frmRegistroIntrusos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(591, 381);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"frmRegistroIntrusos";
			this->Text = L"frmRegistroIntrusos";
			this->Load += gcnew System::EventHandler(this, &frmRegistroIntrusos::frmRegistroIntrusos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		int codigoVer = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		IntrusoController^ objIntrusoController = gcnew IntrusoController();
		Intruso^ objIntruso = objIntrusoController->buscarIntrusoxID(codigoVer);
		frmVerIntruso^ ventanaVerIntruso = gcnew frmVerIntruso(objIntruso);
		ventanaVerIntruso->ShowDialog();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

}
	private: System::Void frmRegistroIntrusos_Load(System::Object^ sender, System::EventArgs^ e) {
		IntrusoController^ objIntrusoController = gcnew IntrusoController();
		List<Intruso^>^ listaIntrusos = objIntrusoController->buscarAll();
		mostrarGrilla(listaIntrusos);
	}
	private: void mostrarGrilla(List<Intruso^>^ listaCarreras) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaCarreras->Count; i++) {
			Intruso^ objProyecto = listaCarreras[i];
			array<String^>^ filaGrilla = gcnew array<String^>(3);
			filaGrilla[0] = Convert::ToString(objProyecto->getId());
			filaGrilla[1] = objProyecto->getFecha();
			filaGrilla[2] = objProyecto->getHora();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
};
}
