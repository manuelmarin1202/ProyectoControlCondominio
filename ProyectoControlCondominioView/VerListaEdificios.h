#pragma once

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioModel;
	using namespace ProyectoControlCondominioController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de VerListaEdificios
	/// </summary>
	public ref class VerListaEdificios : public System::Windows::Forms::Form
	{
	public:
		VerListaEdificios(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		VerListaEdificios(Proyecto^ objProyecto)
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
		~VerListaEdificios()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VerListaEdificios::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SkyBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column6,
					this->Column5, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(480, 148);
			this->dataGridView1->TabIndex = 6;
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
			this->Column5->HeaderText = L"Aforo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"CantPisos";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// VerListaEdificios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(568, 281);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"VerListaEdificios";
			this->Text = L"VerListaEdificios";
			this->Load += gcnew System::EventHandler(this, &VerListaEdificios::VerListaEdificios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void mostrarGrilla(List<Edificio^>^ listaCarreras) {
			this->dataGridView1->Rows->Clear(); /*Elimino toda la informacion del datagrid*/
			for (int i = 0; i < listaCarreras->Count; i++) {
				Edificio^ objProyecto = listaCarreras[i];
				array<String^>^ filaGrilla = gcnew array<String^>(3);
				//filaGrilla[0] = Convert::ToString(objProyecto->getCodigo());
				filaGrilla[0] = Convert::ToString(objProyecto->getCodigo());
				filaGrilla[1] = Convert::ToString(objProyecto->getAforo());
				filaGrilla[2] = Convert::ToString(objProyecto->getCantPisos());
				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}
	private: System::Void VerListaEdificios_Load(System::Object^ sender, System::EventArgs^ e) {
		EdificioController^ objEdificioController = gcnew EdificioController();
		List<Edificio^>^ listaEdificios = objEdificioController->buscarEdificios(objProyecto->getCodigo());
		mostrarGrilla(listaEdificios);
	}
};
}
