#include <iostream>
#include "UsuarioController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto

UsuarioController::UsuarioController() {

}

List<Usuario^>^ UsuarioController::buscarUsuarios(String^ ApellidoPaterno) {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<Usuario^>^ listaUsuariosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	//Esta instruccion for each nos permite ir elemento por elemento de un array
	for each (String ^ lineaCarrera in lineas) {
		//Voy a separar cada elemento del String por ; con el split
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		String^ codigo = datos[0];
		String^ nombre = datos[1];
		String^ apellidoPaterno = datos[2];
		String^ apellidoMaterno = datos[3];
		String^ dni = datos[4];
		String^ nombreFoto = datos[5];
		if (apellidoPaterno->Contains(ApellidoPaterno)) {
			Usuario^ objUsuario = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni,codigo,nombreFoto);
			//String^ ave = objUsuario->getNombres();
			listaUsuariosEncontrados->Add(objUsuario);
		}
	}
	return listaUsuariosEncontrados;
}

List<Usuario^>^ UsuarioController::buscarAll_2() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
List<Usuario^>^ listaProyectosEncontrados = gcnew List<Usuario^>();
array<String^>^ lineas = File::ReadAllLines("usuarios.txt");

String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
//Esta instruccion for each nos permite ir elemento por elemento de un array
for each (String ^ lineaProyecto in lineas) {
	//Voy a separar cada elemento del String por ; con el split
	array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
	String^ codigo = datos[0];
	String^ nombre = datos[1];
	String^ apellidoPaterno = datos[2];
	String^ apellidoMaterno = datos[3];
	String^ dni = datos[4];
	String^ nombreFoto = datos[5];
	Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni,codigo,nombreFoto);
	listaProyectosEncontrados->Add(objProyecto);
}
return listaProyectosEncontrados;
}

void UsuarioController::EscribirArchivo_2(List<Usuario^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		//Usuario^ objeto = gcnew Usuario();
		Usuario^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigoUsuario() + ";" + objeto->getNombres() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni()+";"+objeto->getNombreFoto();
	}
	File::WriteAllLines("usuarios.txt", lineasArchivo);
}

void UsuarioController::agregarProyecto_2(Usuario^ objProyecto) {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	listaUsuarios->Add(objProyecto);
	EscribirArchivo_2(listaUsuarios);
}

void UsuarioController::eliminarUsuarioFisico(String^ codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			listaUsuarios->RemoveAt(i);
		}
	}
	EscribirArchivo_2(listaUsuarios);
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(String^ codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			return listaUsuarios[i];
		}
	}
}

void UsuarioController::actualizarUsuario(Usuario^ objProyecto) {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == objProyecto->getCodigoUsuario()) {
			//Voy a actualizar cada dato de ese proyecto en la lista
		listaUsuarios[i]->setCodigoUsuario(objProyecto->getCodigoUsuario());
		listaUsuarios[i]->setNombres(objProyecto->getNombres());
		listaUsuarios[i]->setApellidoPaterno(objProyecto->getApellidoPaterno());
		listaUsuarios[i]->setApellidoMaterno(objProyecto->getApellidoMaterno());
		listaUsuarios[i]->setDni(objProyecto->getDni());
		listaUsuarios[i]->setNombreFoto(objProyecto->getNombreFoto());
		break;
		}
	}
	EscribirArchivo_2(listaUsuarios);
}


List<String^>^ UsuarioController::obtenerApellidos() {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	List<String^>^ listaApellidos = gcnew List<String^>();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		//Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos
		String^ apellidoPaterno = listaUsuarios[i]->getApellidoPaterno();
		//Voy a buscarlo en la listaDepartamentos
		int existe = 0;
		for (int j = 0; j < listaApellidos->Count; j++) {
			if (listaApellidos[j]->Contains(apellidoPaterno)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaApellidos->Add(apellidoPaterno);
		}
	}
	return listaApellidos;
}

Bitmap^ UsuarioController::leerArchivo(String^ nombreArchivo) {
	Bitmap^ FondoTotal = gcnew Bitmap(nombreArchivo);
	return FondoTotal;
}


