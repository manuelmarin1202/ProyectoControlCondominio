#pragma once
#include "Usuario.h"

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Invitado :Usuario {
	private:
		String^ fecha;
		String^ hora;
	public:
		Invitado();
		Invitado(String^ fecha, String^ hora);
	};
}