#pragma once
#include "frmControlSeguridad.h"
#include "frmConfirmacionAdmin.h"

namespace ProyectoControlCondominioView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace ProyectoControlCondominioController;
	using namespace ProyectoControlCondominioModel;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngresoSeguridad
	/// </summary>
	public ref class IngresoSeguridad : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ FondoTotal = gcnew Bitmap("fondoEntradaAdmin.jpg");
	public:
		IngresoSeguridad(void)
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
		~IngresoSeguridad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Timer^ timer1;
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
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"IngresoSeguridad";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	private: System::Void IngresoSeguridad_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->CreateGraphics();
	BufferedGraphicsContext^ Espacio = BufferedGraphicsManager::Current;
	BufferedGraphics^ Buffer = Espacio->Allocate(g, this->ClientRectangle);
	Buffer->Graphics->DrawImage(FondoTotal, 0, 0, (int)Buffer->Graphics->VisibleClipBounds.Width, (int)Buffer->Graphics->VisibleClipBounds.Height);
	Buffer->Render(g);
	delete Buffer;
	delete Espacio;
	delete g;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ usuarioAdmin = this->textBox1->Text;
	String^ contraAdmin = this->textBox2->Text;
	AdminController^ objAdminController = gcnew AdminController();
	int existe = objAdminController->ConfirmarAdmin(usuarioAdmin, contraAdmin);
	if (existe) {
		frmControlSeguridad^ ventanaPrincipal = gcnew frmControlSeguridad();
		MessageBox::Show("¡Bienvenido administrador!");
		//this->Close();
		ventanaPrincipal->Show();
	}
	else {
		MessageBox::Show("Este usuario y contraseña no existen");
	}
}

private: System::Void linkLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmConfirmacionAdmin^ ventanaConfirmaAdmin = gcnew frmConfirmacionAdmin();
	ventanaConfirmaAdmin->Show();
}
};
}
