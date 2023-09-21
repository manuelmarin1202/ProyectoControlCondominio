#pragma once
#include "Usuario.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class bloqueado:Usuario{
		private:
			String^ fecha;
			String^ hora;
		public:
			bloqueado();
			bloqueado(String^ fecha, String^ hora);
	};
}
