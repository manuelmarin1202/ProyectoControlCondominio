#include "iostream"
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
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ codigoCondominio=datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		if (DepartamentoCondominio->Contains(Departamento)) {
			Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion, listaEdificios);
			listaProyectosEncontrados->Add(objProyecto);
		}
	}
	return listaProyectosEncontrados;
}

List<Proyecto^>^ ProyectoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ codigoCondominio = datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion, listaEdificios);
		listaProyectosEncontrados->Add(objProyecto);
	}
	return listaProyectosEncontrados;
}
void ProyectoController::escribirArchivo(List<Proyecto^>^ listaProyectos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProyectos->Count);
	for (int i = 0; i < listaProyectos->Count; i++) {
		Proyecto^ objProyecto = listaProyectos[i];
		lineasArchivo[i] = objProyecto->getCodigo() + ";" + objProyecto->getCantEdificios()+ ";" + objProyecto->getDepartamento() + ";" + objProyecto->getProvincia() + ";" + objProyecto->getDistrito() + ";" + objProyecto->getNombre() + ";" + objProyecto->getFechaCreacion();
	}
	File::WriteAllLines("Proyectos.txt", lineasArchivo);
}

void ProyectoController::eliminarProyectoFisico(String^ codigo) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == codigo) {
			listaProyectos->RemoveAt(i);
		}
	}
	escribirArchivo(listaProyectos);
}

void ProyectoController::agregarProyecto(Proyecto^ objProyecto) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	listaProyectos->Add(objProyecto);
	escribirArchivo(listaProyectos);
}

Proyecto^ ProyectoController::buscarProyectoxCodigo(String^ codigo) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == codigo) {
			return listaProyectos[i];
		}
	}
}

void ProyectoController::actualizarProyecto(Proyecto^ objProyecto) {
	List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == objProyecto->getCodigo()) {
			//voy a actualizarlo
			listaProyectos[i]->setCodigo(objProyecto->getCodigo());
			listaProyectos[i]->setCantEdificios(objProyecto->getCantEdificios());
			listaProyectos[i]->setDepartamento(objProyecto->getDepartamento());
			listaProyectos[i]->setProvincia(objProyecto->getProvincia());
			listaProyectos[i]->setDistrito(objProyecto->getDistrito());
			listaProyectos[i]->setNombre(objProyecto->getNombre());
			listaProyectos[i]->setFechaCreacion(objProyecto->getFechaCreacion());
			break;
		}
	}
	escribirArchivo(listaProyectos);
}

List<String^>^ ProyectoController::obtenerDepartamentos() {
	List<Proyecto^>^ listaProyectos = buscarAll();
	List<String^>^ listaDepartamentos = gcnew List<String^>();
	for (int i = 0; i < listaProyectos->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ departamento = listaProyectos[i]->getDepartamento();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaDepartamentos->Count; j++) {
			if (listaDepartamentos[j]->Contains(departamento)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaDepartamentos->Add(departamento);
		}
	}
	return listaDepartamentos;
}


