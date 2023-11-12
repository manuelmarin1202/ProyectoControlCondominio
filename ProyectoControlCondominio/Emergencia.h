#pragma once
using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Emergencia {
	private:
		int codigo;
		String^ tipo;
		String^ ubicacion;
		String^ fecha;
		String^ hora;
	public:
		Emergencia();
		Emergencia(int codigo,String^ tipo, String^ ubicacion, String^ fecha, String^ hora);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ tipo);
		String^ getUbicacion();
		void setUbicacion(String^ ubicacion);
		String^ getFecha();
		void setFecha(String^ fecha);
		String^ getHora();
		void setHora(String^ hora);
	};
}