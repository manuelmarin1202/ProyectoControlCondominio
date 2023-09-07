#pragma once
#include "Piso.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Condominio {
	private:
		int cantPisos;
		String^ nombreCondominio;
		List<Piso^>^ listaPisos;
	public:
		Condominio();
		Condominio(int cantPisos, String^ nombreCondominio, List<Piso^>^ listaPisos);
};