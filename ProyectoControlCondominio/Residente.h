#pragma once
#include "Usuario.h"

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Residente :Usuario {
	private:
		String^ fecha;
		String^ hora;
	public:
		Residente();
		Residente(String^ fecha, String^ hora);
	};
}