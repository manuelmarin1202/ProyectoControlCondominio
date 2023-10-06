#include <iostream>
#include "AdminController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto

AdminController::AdminController() {

}

int AdminController::ConfirmarAdmin(String^ usuario, String^ contra) {
	array<String^>^ lineas = File::ReadAllLines("Admin.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	int existe = 0;
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ usuarioAdmin = datos[0];
		String^ contraAdmin = datos[1];
		if (usuarioAdmin==usuario && contraAdmin==contra) {
			existe = 1;
		}
	}
	return existe;
}

List<Admin^>^ AdminController::buscarAllAdmin() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Admin^>^ listaAdminEncontrados = gcnew List<Admin^>();
	array<String^>^ lineas = File::ReadAllLines("Admin.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaAdmin in lineas) {
		array<String^>^ datos = lineaAdmin->Split(separadores->ToCharArray());
		String^ usuarioAdmin = datos[0];
		String^ contraAdmin = datos[1];
		Admin^ objAdmin = gcnew Admin(usuarioAdmin, contraAdmin);
		listaAdminEncontrados->Add(objAdmin);
	}
	return listaAdminEncontrados;
}

void AdminController::escribirArchivo(List<Admin^>^ listaAdmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaAdmin->Count);
	for (int i = 0; i < listaAdmin->Count; i++) {
		Admin^ objAdmin = listaAdmin[i];
		lineasArchivo[i] = objAdmin->getUsuario() + ";" + objAdmin->getContra();
	}
	File::WriteAllLines("Admin.txt", lineasArchivo);
}

void AdminController::agregarProyecto(Admin^ objAdmin) {
	List<Admin^>^ listaAdmin = buscarAllAdmin();
	listaAdmin->Add(objAdmin);
	escribirArchivo(listaAdmin);
}