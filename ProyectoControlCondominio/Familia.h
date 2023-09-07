#pragma once
#include "Residente.h"
#include "Invitado.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Familia {
	private:
		String^ apellido;
		int cantInvitados;
		int CantFamiliares;
		List<Residente^>^ listaResidentes;
		List<Invitado^>^ listaInvitados;
	public:
		Familia();
		Familia(String^ apellido, int cantInvitados, int CantFamiliares, List<Residente^>^ listaResidentes, List<Invitado^>^ listaInvitados);
};