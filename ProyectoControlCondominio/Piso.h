#pragma once
#include "Apartamento.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class Piso {
	private:
		int numApartamentos;
		int numPiso;
		List<Apartamento^>^ listaApartamentos;
	public:
		Piso();
		Piso(int numApartamentos, int numPiso, List<Apartamento^>^ listaApartamentos);
	};
}

