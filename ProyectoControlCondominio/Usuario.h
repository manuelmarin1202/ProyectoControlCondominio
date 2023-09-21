#pragma once

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Usuario {
	private:
		String^ codigo;
	public:
		Usuario();
		Usuario(String^ codigo);
	};
}
