#pragma once

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Admin {
	private:
		String^ usuario;
		String^ contra;
	public:
		Admin();
		Admin(String^ usuario, String^ contra);
		String^ getUsuario();
		void setUsuario(String^ usuario);
		String^ getContra();
		void setContra(String^ contra);
	};
}