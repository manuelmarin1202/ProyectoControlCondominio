#pragma once
#include "frmNuevoProyecto.h"
#include "frmEditarProyecto.h"
#include "frmVerProyecto.h"

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
	/// Resumen de frmMantenimientoProyectos
	/// </summary>
	public ref class frmMantenimientoProyectos : public System::Windows::Forms::Form
	{
	public:
		frmMantenimientoProyectos(void)
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
		~frmMantenimientoProyectos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;









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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Simplex_IV25", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(102, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(749, 101);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(435, 49);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 26);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(351, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Distrito:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(621, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lima", L"La Libertad", L"Cusco" });
			this->comboBox1->Location = System::Drawing::Point(172, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 26);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantenimientoProyectos::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Departamento:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column6,
					this->Column5, this->Column2, this->Column3, this->Column4, this->Column1
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(29, 142);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(901, 148);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantenimientoProyectos::dataGridView1_CellContentClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Código";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Nombre";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"CantEdificios";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Provincia";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Distrito";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha de Creación";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(200, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(668, 312);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(524, 312);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Ver";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantenimientoProyectos::button5_Click);
			// 
			// frmMantenimientoProyectos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(958, 403);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"frmMantenimientoProyectos";
			this->Text = L"frmMantenimientoProyectos";
			this->Load += gcnew System::EventHandler(this, &frmMantenimientoProyectos::frmMantenimientoProyectos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Departamento = this->comboBox1 -> Text;//se obtiene el texto seleccionado
		String^ distrito = this->comboBox2->Text;
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		if (distrito != "") {
			List<Proyecto^>^ listaProyectos = objProyectoController->buscarProyectos2(Departamento, distrito);
			mostrarGrilla(listaProyectos);
		}
		else {
			List<Proyecto^>^ listaProyectos = objProyectoController->buscarProyectos(Departamento);
			mostrarGrilla(listaProyectos);
		}
	}

	private: void mostrarGrilla(List<Proyecto^>^ listaCarreras) {
		this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
		for (int i = 0; i < listaCarreras->Count; i++) {
			Proyecto^ objProyecto = listaCarreras[i];
			array<String^>^ filaGrilla = gcnew array<String^>(6);
			//filaGrilla[0] = Convert::ToString(objProyecto->getCodigo());
			filaGrilla[0] = objProyecto->getCodigo();
			filaGrilla[1] = objProyecto->getNombre();
			filaGrilla[2] = Convert::ToString(objProyecto->getCantEdificios());
			filaGrilla[3] = objProyecto->getProvincia();
			filaGrilla[4] = objProyecto->getDistrito();
			filaGrilla[5] = objProyecto->getFechaCreacion();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ departamento = this->comboBox1->Text;
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		List<String^>^ listaDistritos = objProyectoController->obtenerDistritosxDptos(departamento);
		this->comboBox2->Items->Clear();
		for (int i = 0; i < listaDistritos->Count; i++) {
			this->comboBox2->Items->Add(listaDistritos[i]);
		}
	}
	private: System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		ProyectoController^ objetoProyecto;
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ codigoEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		objetoProyecto->eliminarProyectoFisico(codigoEliminar);
		MessageBox::Show("El proyecto ha sido eliminado con éxito");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoProyecto^ ventanaNuevoProyecto = gcnew frmNuevoProyecto();
		ventanaNuevoProyecto->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ codigoEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		Proyecto^ objProyecto = objProyectoController->buscarProyectoxCodigo(codigoEditar);
		frmEditarProyecto^ ventanaEditarProyecto = gcnew frmEditarProyecto(objProyecto);
		ventanaEditarProyecto->ShowDialog();
	}
	private: System::Void frmMantenimientoProyectos_Load(System::Object^ sender, System::EventArgs^ e) {
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		List<String^>^ listaDepartamentos = objProyectoController->obtenerDepartamentos();
		this->comboBox1->Items->Clear();
		for (int i = 0; i<listaDepartamentos->Count; i++) {
			this->comboBox1->Items->Add(listaDepartamentos[i]);
		}
		
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0*/
		String^ codigoVer = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		ProyectoController^ objProyectoController = gcnew ProyectoController();
		Proyecto^ objProyecto = objProyectoController->buscarProyectoxCodigo(codigoVer);
		frmVerProyecto^ ventanaVerProyecto = gcnew frmVerProyecto(objProyecto);
		ventanaVerProyecto->ShowDialog();
	}
};
}
