#pragma once

using namespace System::Data::SqlClient;
using namespace System;
using namespace ProyectoControlCondominioModel;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioController {
	public ref class EdificioController {
	private: SqlConnection^ objConexion;
	public:
		EdificioController();
		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Edificio^>^ buscarAll();
		//Edificio^ buscarEdificioxCodigo(int codigo);
		void agregarEdificio(Edificio^ objEdificio);
		List<Edificio^>^ buscarEdificios(String^ codigoProyecto);
		void eliminarEdificios(String^ codigoProyecto);
	};
}