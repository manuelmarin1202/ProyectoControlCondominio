#pragma once
#include "frmMantenimientoProyectos.h"
#include "frmAdministrarUsuarios.h"
#include "frmReporteNroEdificiosProyecto.h"
#include "frmReporteNroUsuarios.h"
#include "ventanaDeCambios.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proyectoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proyectosVsNroEdificiosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nroDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ notificacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solicitudesDeCambioDeDatosToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proyectoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proyectosVsNroEdificiosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nroDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notificacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitudesDeCambioDeDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->operacionesToolStripMenuItem,
					this->reportesToolStripMenuItem, this->notificacionesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1337, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->proyectoToolStripMenuItem,
					this->usuariosToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(111, 21);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// proyectoToolStripMenuItem
			// 
			this->proyectoToolStripMenuItem->Name = L"proyectoToolStripMenuItem";
			this->proyectoToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->proyectoToolStripMenuItem->Text = L"Proyecto";
			this->proyectoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::proyectoToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(161, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::usuariosToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->proyectosVsNroEdificiosToolStripMenuItem,
					this->nroDeUsuariosToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(89, 21);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// proyectosVsNroEdificiosToolStripMenuItem
			// 
			this->proyectosVsNroEdificiosToolStripMenuItem->Name = L"proyectosVsNroEdificiosToolStripMenuItem";
			this->proyectosVsNroEdificiosToolStripMenuItem->Size = System::Drawing::Size(284, 26);
			this->proyectosVsNroEdificiosToolStripMenuItem->Text = L"Proyectos vs Nro Edificios";
			this->proyectosVsNroEdificiosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::proyectosVsNroEdificiosToolStripMenuItem_Click);
			// 
			// nroDeUsuariosToolStripMenuItem
			// 
			this->nroDeUsuariosToolStripMenuItem->Name = L"nroDeUsuariosToolStripMenuItem";
			this->nroDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(284, 26);
			this->nroDeUsuariosToolStripMenuItem->Text = L"Nro de Usuarios";
			this->nroDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::nroDeUsuariosToolStripMenuItem_Click);
			// 
			// notificacionesToolStripMenuItem
			// 
			this->notificacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->solicitudesDeCambioDeDatosToolStripMenuItem });
			this->notificacionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 7.8F));
			this->notificacionesToolStripMenuItem->Name = L"notificacionesToolStripMenuItem";
			this->notificacionesToolStripMenuItem->Size = System::Drawing::Size(129, 21);
			this->notificacionesToolStripMenuItem->Text = L"Notificaciones";
			// 
			// solicitudesDeCambioDeDatosToolStripMenuItem
			// 
			this->solicitudesDeCambioDeDatosToolStripMenuItem->Name = L"solicitudesDeCambioDeDatosToolStripMenuItem";
			this->solicitudesDeCambioDeDatosToolStripMenuItem->Size = System::Drawing::Size(316, 26);
			this->solicitudesDeCambioDeDatosToolStripMenuItem->Text = L"Solicitudes de cambio de datos";
			this->solicitudesDeCambioDeDatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::solicitudesDeCambioDeDatosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1337, 673);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void proyectoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			frmMantenimientoProyectos^ ventanMantProyectos = gcnew frmMantenimientoProyectos();
			ventanMantProyectos->MdiParent = this;
			ventanMantProyectos->Show(); 
		}

	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAdministrarUsuarios^ ventanMantUsuarios = gcnew frmAdministrarUsuarios();
		ventanMantUsuarios->MdiParent = this;
		ventanMantUsuarios->Show();
	}
	private: System::Void proyectosVsNroEdificiosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteNroEdificiosProyecto^ ventanaReporte = gcnew frmReporteNroEdificiosProyecto();
		ventanaReporte->MdiParent = this;
		ventanaReporte->Show();
	}
	private: System::Void nroDeUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteNroUsuarios^ ventanaReporte = gcnew frmReporteNroUsuarios();
		ventanaReporte->MdiParent = this;
		ventanaReporte->Show();
	}
private: System::Void solicitudesDeCambioDeDatosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	UsuarioController^ objProyectoControl = gcnew UsuarioController();
	int request = objProyectoControl->requestsTotales();
	if (request == 0) {
		MessageBox::Show("No hay solicitudes de cambio activas");
		}
	else {
		MessageBox::Show("Tiene " + request + " solicitudes activas");
		ventanaDeCambios^ ventanaCambios = gcnew ventanaDeCambios();
		ventanaCambios->MdiParent = this;
		ventanaCambios->Show();
	}
}
private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
