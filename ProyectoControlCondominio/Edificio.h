#pragma once
#include "Piso.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class Edificio {
	private:
		int cantPisos;
		int aforo;
		int codigo;
		String^ codigoProyecto;
	public:
		Edificio();
		Edificio(int cantPisos,int aforo, int codigo, String^ codigoProyecto);
		int getCantPisos();
		void setCantPisos(int cantPisos);
		int getAforo();
		void setAforo(int aforo);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getCodigoProyecto();
		void setCodigoProyecto(String^ codigoProyecto);
	};
}