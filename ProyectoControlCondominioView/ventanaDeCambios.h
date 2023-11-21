#pragma once
#include "frmAceptarCambios.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;

	/// <summary>
	/// Resumen de ventanaDeCambios
	/// </summary>
	public ref class ventanaDeCambios : public System::Windows::Forms::Form
	{
	public:
		ventanaDeCambios(void)
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
		~ventanaDeCambios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	protected:











	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PeachPuff;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column6,
					this->Column5, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(6, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(679, 144);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ventanaDeCambios::dataGridView1_CellContentClick);
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
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DNI";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"RomanT", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(695, 204);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de Usuarios:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ventanaDeCambios::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(180, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 27);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Ver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventanaDeCambios::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(446, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 27);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ventanaDeCambios::button2_Click);
			// 
			// ventanaDeCambios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(719, 285);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"ventanaDeCambios";
			this->Text = L"ventanaDeCambios";
			this->Load += gcnew System::EventHandler(this, &ventanaDeCambios::ventanaDeCambios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void mostrarGrilla(List<Usuario^>^ listaUsuarios) {
			this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
			for (int i = 0; i < listaUsuarios->Count; i++) {
				Usuario^ objProyecto = listaUsuarios[i];
				/*Esta filaGrilla representa una fila del data grid de la pantalla*/
				array<String^>^ filaGrilla = gcnew array<String^>(7);

				filaGrilla[0] = objProyecto->getCodigoUsuario();
				filaGrilla[1] = objProyecto->getNombres();
				filaGrilla[2] = objProyecto->getApellidoPaterno();
				filaGrilla[3] = objProyecto->getApellidoMaterno();
				filaGrilla[4] = objProyecto->getDni();

				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}

	private: System::Void bindingNavigatorCountItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; //Le pongo [0] porque en este caso estamos asumiendo que solo seleccionamos una fila, por ello es la de la posicion 0
	String^ codigoEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	UsuarioController^ objUsuarioControl = gcnew UsuarioController();
	Usuario^ objUsuario = objUsuarioControl->buscarPedidoxCodigo(codigoEditar);
	//Usuario^ objUsuario=objUsuarioControl->buscarUsuarioxCodigo(codigoEditar);
	frmAceptarCambios^ ventanaEditarUsuario = gcnew frmAceptarCambios(objUsuario);
	ventanaEditarUsuario->ShowDialog();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ventanaDeCambios_Load(System::Object^ sender, System::EventArgs^ e) {
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	List<Usuario^>^ listaPedidos = objUsuarioController->buscarAllPedidos(); 
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	for (int i = 0; i < listaPedidos->Count; i++) {
		String^ codigo = listaPedidos[i]->getCodigoUsuario();
		Usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigo);
		listaUsuarios->Add(objUsuario);
	}
	//List<Usuario^>^ listaUsuarios = objUsuarioController->;
	mostrarGrilla(listaUsuarios);
	
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
