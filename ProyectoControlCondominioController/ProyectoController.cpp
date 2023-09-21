#include <iostream>
#include "ProyectoController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto

ProyectoController::ProyectoController() {

}

List<Proyecto^>^ ProyectoController::buscarProyectos(String^ Departamento) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		String^ codigoCondominio=datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		if (DepartamentoCondominio->Contains(Departamento)) {
			Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion);
			listaProyectosEncontrados->Add(objProyecto);
		}
	}
	return listaProyectosEncontrados;
}


