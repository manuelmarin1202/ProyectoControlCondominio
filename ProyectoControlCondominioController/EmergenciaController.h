#pragma once

using namespace System::Data::SqlClient;
using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	public ref class EmergenciaController {
	private: SqlConnection^ objConexion;
	public:
		/*
		List<Emergencia^>^ buscarEmergenciaTipo(String^ tipo);
		List<Emergencia^>^ buscarEmergenciaTipoUbicacion(String^ tipo, String^ ubicacion);
		void eliminarEmergencia(String^ id);
		void editarEmergencia(String^ id);
		void verEmergencia(String^ id)bfbvvb;
		*/
		EmergenciaController();
		void AbrirConexionBD();
		void CerrarConexionBD();
		void agregarEmergencia(Emergencia^ objEmergencia);
		List<Emergencia^>^ buscarAll();
		List<Emergencia^>^ buscarEmergenciaxFecha(String^ fecha);
		List<Emergencia^>^ buscarEmergenciaTipoUbicacion(String^ tipo, String^ ubicacion);
		List<String^>^ listaFechas(List<Emergencia^>^ listaEmergencias);
		int cantidadEmergenciasxFecha(String^ fecha);
	};
}
