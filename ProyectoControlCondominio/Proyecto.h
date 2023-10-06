#pragma once
#include "Edificio.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoControlCondominioModel {
	public ref class Proyecto {
	private:
		String^ codigo;//
		int cantEdificios;//
		String^ Departamento;
		String^ Provincia;//
		String^ Distrito;//
		String^ NombreCondominio;//
		String^ FechaCreacion;//
		List<Edificio^>^ listaEdificios;
	public:
		Proyecto();
		Proyecto(String^ codigo, int cantEdificios, String^ Departamento, String^ Provincia, String^ Distrito, String^ NombreCondominio, String^ FechaCreacion);
		String^ getCodigo();
		void setCodigo(String^ codigo);
		String^ getNombre();
		void setNombre(String^ NombreCondominio);
		int getCantEdificios();
		void setCantEdificios(int cantEdificios);
		String^ getDepartamento();
		void setDepartamento(String^ Departamento);
		String^ getProvincia();
		void setProvincia(String^ Provincia);
		String^ getDistrito();
		void setDistrito(String^ Distrito);
		String^ getFechaCreacion();
		void setFechaCreacion(String^ FechaCreacion);
	};
}