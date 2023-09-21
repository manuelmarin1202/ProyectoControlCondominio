#pragma once


using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	public ref class ProyectoController {
		public:
			ProyectoController();
			List<Proyecto^>^ buscarProyectos(String^ Departamento);
	};
}