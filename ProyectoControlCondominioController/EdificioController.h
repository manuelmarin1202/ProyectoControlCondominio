#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {

	public ref class EdificioController {
	public:
		EdificioController();
		List<Edificio^>^ buscarAll();
		void escribirArchivo(List<Edificio^>^ listaEdificios);
		void agregarEdificio(Edificio^ objEdificio, int codigoProyecto);
		List<Edificio^>^ buscarEdificios(int codigoProyecto);
	};
}