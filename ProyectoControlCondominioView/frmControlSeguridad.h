#pragma once
#include "frmRegistroEmergencias.h"
#include "frmRegistroIntrusos.h"
#include "frmReporteEmergencias.h"
#include "frmConfigurarCamara.h"
#include "frmReporteIntrusos.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoControlCondominioModel;

	/// <summary>
	/// Resumen de frmControlSeguridad
	/// </summary>
	public ref class frmControlSeguridad : public System::Windows::Forms::Form
	{
	public:
		frmControlSeguridad(void)
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
		~frmControlSeguridad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ incidentesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ emergenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ intrusosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ emergenciasPorFechasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ intrusosPorFechasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ camaraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configurarCámaraToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->incidentesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->emergenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intrusosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->emergenciasPorFechasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intrusosPorFechasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->camaraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurarCámaraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->incidentesToolStripMenuItem,
					this->reportesToolStripMenuItem, this->camaraToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(994, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// incidentesToolStripMenuItem
			// 
			this->incidentesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->emergenciasToolStripMenuItem,
					this->intrusosToolStripMenuItem
			});
			this->incidentesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 8.999999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->incidentesToolStripMenuItem->Name = L"incidentesToolStripMenuItem";
			this->incidentesToolStripMenuItem->Size = System::Drawing::Size(100, 25);
			this->incidentesToolStripMenuItem->Text = L"Incidentes";
			// 
			// emergenciasToolStripMenuItem
			// 
			this->emergenciasToolStripMenuItem->Name = L"emergenciasToolStripMenuItem";
			this->emergenciasToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->emergenciasToolStripMenuItem->Text = L"Emergencias";
			this->emergenciasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmControlSeguridad::emergenciasToolStripMenuItem_Click);
			// 
			// intrusosToolStripMenuItem
			// 
			this->intrusosToolStripMenuItem->Name = L"intrusosToolStripMenuItem";
			this->intrusosToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->intrusosToolStripMenuItem->Text = L"Intrusos";
			this->intrusosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmControlSeguridad::intrusosToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->emergenciasPorFechasToolStripMenuItem,
					this->intrusosPorFechasToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 8.999999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(88, 25);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// emergenciasPorFechasToolStripMenuItem
			// 
			this->emergenciasPorFechasToolStripMenuItem->Name = L"emergenciasPorFechasToolStripMenuItem";
			this->emergenciasPorFechasToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			this->emergenciasPorFechasToolStripMenuItem->Text = L"Emergencias por Fechas";
			this->emergenciasPorFechasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmControlSeguridad::emergenciasPorFechasToolStripMenuItem_Click);
			// 
			// intrusosPorFechasToolStripMenuItem
			// 
			this->intrusosPorFechasToolStripMenuItem->Name = L"intrusosPorFechasToolStripMenuItem";
			this->intrusosPorFechasToolStripMenuItem->Size = System::Drawing::Size(264, 26);
			this->intrusosPorFechasToolStripMenuItem->Text = L"Intrusos por Fechas";
			this->intrusosPorFechasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmControlSeguridad::intrusosPorFechasToolStripMenuItem_Click);
			// 
			// camaraToolStripMenuItem
			// 
			this->camaraToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->configurarCámaraToolStripMenuItem });
			this->camaraToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 8.999999F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->camaraToolStripMenuItem->Name = L"camaraToolStripMenuItem";
			this->camaraToolStripMenuItem->Size = System::Drawing::Size(76, 25);
			this->camaraToolStripMenuItem->Text = L"Camara";
			// 
			// configurarCámaraToolStripMenuItem
			// 
			this->configurarCámaraToolStripMenuItem->Name = L"configurarCámaraToolStripMenuItem";
			this->configurarCámaraToolStripMenuItem->Size = System::Drawing::Size(225, 26);
			this->configurarCámaraToolStripMenuItem->Text = L"Configurar Cámara";
			this->configurarCámaraToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmControlSeguridad::configurarCámaraToolStripMenuItem_Click);
			// 
			// frmControlSeguridad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(994, 528);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmControlSeguridad";
			this->Text = L"frmControlSeguridad";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void emergenciasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistroEmergencias^ ventanaRegistroEmergencias = gcnew frmRegistroEmergencias();
		ventanaRegistroEmergencias->MdiParent = this;
		ventanaRegistroEmergencias->Show();
	}
private: System::Void intrusosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRegistroIntrusos^ ventanaRegistroIntrusos = gcnew frmRegistroIntrusos();
	ventanaRegistroIntrusos->MdiParent = this;
	ventanaRegistroIntrusos->Show();
}
private: System::Void emergenciasPorFechasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteEmergencias^ ventanaReportes = gcnew frmReporteEmergencias();
	ventanaReportes->MdiParent = this;
	ventanaReportes->Show();
}
private: System::Void configurarCámaraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmConfigurarCamara^ ventanaConfigCamara = gcnew frmConfigurarCamara();
	ventanaConfigCamara->Show();
}
private: System::Void verFotosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void intrusosPorFechasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteIntrusos^ ventanaReportes = gcnew frmReporteIntrusos();
	ventanaReportes->MdiParent = this;
	ventanaReportes->Show();
}
};
}
