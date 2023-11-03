#include "EdificioController.h"


using namespace ProyectoControlCondominioController;
using namespace System::IO;

EdificioController::EdificioController() {

}

List<Edificio^>^ EdificioController::buscarAll() {
	List<Edificio^>^ listaEncontrados = gcnew List<Edificio^>();
	return listaEncontrados;
}

void EdificioController::escribirArchivo(List<Edificio^>^ listaEdificios) {

}

void EdificioController::agregarEdificio(Edificio^ objEdificio, int codigoProyecto) {
	array<String^>^ lineas = File::ReadAllLines("edificios.txt");
	int cantLineas = 0;
	for each (String ^ linea in lineas) {
		cantLineas++;
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(cantLineas + 1);
	int i;
	for (i = 0; i < (cantLineas); i++) {
		lineasArchivo[i] = lineas[i];
	}
	lineasArchivo[i] = codigoProyecto + ";" + objEdificio->getCantPisos() + ";" + objEdificio->getAforo() + ";" + objEdificio->getCodigo();
	File::WriteAllLines("edificios.txt", lineasArchivo);
}

//cantPisos; aforo; codigoEdificio; codigoListaPisos; codigoProyecto
List<Edificio^>^ EdificioController::buscarEdificios(int codigoProyecto) {
	List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
	array<String^>^ lineas = File::ReadAllLines("edificios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaEdificio in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaEdificio->Split(separadores->ToCharArray());
		int cantPisos = Convert::ToInt32(datos[0]);
		int aforoEdificio = Convert::ToInt32(datos[1]);
		String^ codigoEdificio = datos[2];
		String^ codigoListaPisos = datos[3];
		int codigoProyectoArchivo = Convert::ToInt32(datos[4]);
		List<Piso^>^ listaPisos = gcnew List<Piso^>();
		if (codigoProyectoArchivo == codigoProyecto) {
			Edificio^ objEdificio = gcnew Edificio(cantPisos, aforoEdificio, codigoEdificio,listaPisos);
			listaEdificios->Add(objEdificio);
		}
	}
	return listaEdificios;
}