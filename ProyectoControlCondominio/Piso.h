#pragma once
#include "Apartamento.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class Piso {
	private:
		int codigo;
		int numApartamentos;
		int codigoEdificio;
		int numPiso;
	public:
		Piso();
		Piso(int codigo, int numApartamentos, int codigoEdificio, int numPiso);
		int getCodigo();
		void setCodigo(int codigo);
		int getNumApartamentos();
		void setNumApartamentos(int numApartamentos);
		int getCodigoEdificio();
		void setCodigoEdificio(int codigoEdificio);
		int getNumPiso();
		void setNumPiso(int numPiso);
	};
}

