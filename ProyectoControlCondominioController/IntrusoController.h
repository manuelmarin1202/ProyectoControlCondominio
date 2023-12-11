#pragma once
#include <iostream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>

using namespace System::Data::SqlClient;
using namespace System;
using namespace System::Windows;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;
using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace AForge::Video;
using namespace AForge::Video::DirectShow;
using namespace System;
using namespace System::Windows;
using namespace System::IO::Ports;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	
	public ref class IntrusoController {
		
	private: 
		SqlConnection^ objConexion;
	public:
		IntrusoController();
		void AbrirConexionBD();
		void CerrarConexionBD();
		void agregarIntruso(Intruso^ objIntruso);
		List<Intruso^>^ buscarAll();
		Intruso^ buscarIntrusoxID(int id);
	};
}
