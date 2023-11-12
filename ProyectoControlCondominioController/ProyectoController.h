#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;
using namespace System::Data::SqlClient;

namespace ProyectoControlCondominioController {
	public ref class ProyectoController {
		private: SqlConnection^ objConexion;
		public:
			ProyectoController();
			int existeCodigo(String^ codigo);
			void AbrirConexionBD();
			void CerrarConexionBD();
			List<Proyecto^>^ buscarProyectos(String^ Departamento);
			List<Proyecto^>^ buscarProyectos2(String^ Departamento,String^ distrito);
			//métodos q son fijas
			List<Proyecto^>^ buscarAll();
			void escribirArchivo(List<Proyecto^>^ listaProyectos);
			void eliminarProyectoFisico(String^ codigo);
			void agregarProyecto(Proyecto^ objProyecto);
			Proyecto^ buscarProyectoxCodigo(String^ codigo);
			Proyecto^ buscarProyectoxNombre(String^ nombre);
			void actualizarProyecto(Proyecto^ objProyecto);
			List<String^>^ obtenerDepartamentos();
			List<String^>^ obtenerDistritosxDptos(String^ departamento);
			String^ obtenerNombreFoto(String^ nombreFotoLargo);

	};
}