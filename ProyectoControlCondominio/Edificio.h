#pragma once
#include "Piso.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class Edificio {
	private:
		int cantPisos;
		int aforo;
		String^ codigo;
		List<Piso^>^ listaPisos;
	public:
		Edificio();
		Edificio(int cantPisos,int aforo, String^ codigo, List<Piso^>^ listaPisos);
	};
}