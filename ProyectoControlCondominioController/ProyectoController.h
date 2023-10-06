#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	public ref class ProyectoController {
		public:
			ProyectoController();
			List<Proyecto^>^ buscarProyectos(String^ Departamento);
			//m�todos q son fijas
			List<Proyecto^>^ buscarAll();
			void escribirArchivo(List<Proyecto^>^ listaProyectos);
			void eliminarProyectoFisico(String^ codigo);
			void agregarProyecto(Proyecto^ objProyecto);
			Proyecto^ buscarProyectoxCodigo(String^ codigo);
			void actualizarProyecto(Proyecto^ objProyecto);
			List<String^>^ obtenerDepartamentos();
	};
}