#pragma once
using namespace System::Data::SqlClient;
using namespace System;
using namespace ProyectoControlCondominioModel;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioController {
	public ref class PisoController {
	private: SqlConnection^ objConexion;
	public:
		PisoController();
		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Piso^>^ buscarAll();
		void agregarPiso(int cantAp, int codigoEdificio,int numPiso);
		void eliminarPisos(int codigoEdificio);
		//Edificio^ buscarEdificioxCodigo(int codigo);
		//void agregarPiso(Edificio^ objEdificio);
		//List<Piso^>^ buscarPisos(String^ codigoEdificio);
		//void eliminarPisos(String^ codigoEdificio);
	};
}
