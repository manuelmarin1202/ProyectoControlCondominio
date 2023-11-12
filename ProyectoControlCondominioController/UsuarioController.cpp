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
		String^ contraseña = datos[6];
		if (apellidoPaterno->Contains(ApellidoPaterno)) {
			Usuario^ objUsuario = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni,codigo,nombreFoto, contraseña);
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
	String^ contraseña = datos[6];
	Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni,codigo,nombreFoto, contraseña);
	listaProyectosEncontrados->Add(objProyecto);
}
return listaProyectosEncontrados;
}

List<Usuario^>^ UsuarioController::buscarAll_3() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<Usuario^>^ listaProyectosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("PedidosCambioDatos.txt");
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
		String^ contraseña = datos[6];
		Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni, codigo, nombreFoto, contraseña);
		listaProyectosEncontrados->Add(objProyecto);
	}
	return listaProyectosEncontrados;
}

void UsuarioController::EscribirArchivo_2(List<Usuario^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		//Usuario^ objeto = gcnew Usuario();
		Usuario^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigoUsuario() + ";" + objeto->getNombres() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni()+";"+objeto->getNombreFoto() + ";" + objeto->getContraseña();
	}
	File::WriteAllLines("usuarios.txt", lineasArchivo);
}

void UsuarioController::agregarProyecto_2(Usuario^ objProyecto) {
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	List<Usuario^>^ listaCambios = buscarCambioDatos();
	List<String^>^ listaRequests = buscarRequests();
	listaUsuarios->Add(objProyecto);
	listaCambios->Add(objProyecto);
	listaRequests->Add("0");
	EscribirArchivo_2(listaUsuarios);
	EscribirCambioDatos(listaCambios);
	EscribirPedidos(listaRequests);
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

Usuario^ UsuarioController::buscarUsuarioCambioxCodigo(String^ codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll_3();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			return listaUsuarios[i];
		}
	}
}

void UsuarioController::actualizarUsuario(Usuario^ objProyecto) {
	//3232323
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
		listaUsuarios[i]->setContraseña(objProyecto->getContraseña());
		break;
		}
	}
	EscribirArchivo_2(listaUsuarios);
	EscribirCambioDatos(listaUsuarios);
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

String^ UsuarioController::obtenerNombreFoto(String^ nombreFotoLargo) {
	String^ separadores = "\\";
	//Convert::ToString(0x5C)
	array<String^>^ datos = nombreFotoLargo->Split(separadores->ToCharArray());
	String^ nombreFoto;
	int num = datos->Length;
	nombreFoto = datos[num - 1];
	return nombreFoto;
}

int UsuarioController::ConfirmarAdmin(String^ contra) {
	array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	int existe = 0;
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ contraAdmin = datos[0];
		if (contraAdmin == contra) {
			existe = 1;
		}
	}
	return existe;
}

int UsuarioController::ConfirmarContra(String^ codigover, String^ contra) {
	int existe = 0;
	Usuario^ objUsuario = buscarUsuarioxCodigo(codigover);
	String^ contraseña = objUsuario->getContraseña();
	if (contraseña == contra) {
		existe = 1;
	}
	return existe;
}

void UsuarioController::EscribirCambioDatos(List<Usuario^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Usuario^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigoUsuario() + ";" + objeto->getNombres() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni() + ";" + objeto->getNombreFoto() + ";" + objeto->getContraseña();
	}
	File::WriteAllLines("PedidosCambioDatos.txt", lineasArchivo);
}


int UsuarioController::actualizarCambioDatos(Usuario^ objProyecto) {
	List<Usuario^>^ listaUsuarios = buscarCambioDatos();
	int fila = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == objProyecto->getCodigoUsuario()) {
			//Voy a actualizar cada dato de ese proyecto en la lista
			listaUsuarios[i]->setCodigoUsuario(objProyecto->getCodigoUsuario());
			listaUsuarios[i]->setNombres(objProyecto->getNombres());
			listaUsuarios[i]->setApellidoPaterno(objProyecto->getApellidoPaterno());
			listaUsuarios[i]->setApellidoMaterno(objProyecto->getApellidoMaterno());
			listaUsuarios[i]->setDni(objProyecto->getDni());
			listaUsuarios[i]->setNombreFoto(objProyecto->getNombreFoto());
			listaUsuarios[i]->setContraseña(objProyecto->getContraseña());
			fila = i;
			break;
		}
	}
	EscribirCambioDatos(listaUsuarios);
	return fila;
}

List<Usuario^>^ UsuarioController::buscarCambioDatos() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<Usuario^>^ listaProyectosEncontrados = gcnew List<Usuario^>();
	array<String^>^ lineas = File::ReadAllLines("PedidosCambioDatos.txt");

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
		String^ contraseña = datos[6];
		Usuario^ objProyecto = gcnew Usuario(nombre, apellidoPaterno, apellidoMaterno, dni, codigo, nombreFoto, contraseña);
		listaProyectosEncontrados->Add(objProyecto);
	}
	return listaProyectosEncontrados;
}

List<String^>^ UsuarioController::buscarRequests() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<String^>^ listaPedidosEncontrados = gcnew List<String^>();
	array<String^>^ lineas = File::ReadAllLines("Pedidos.txt");

	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	//Esta instruccion for each nos permite ir elemento por elemento de un array
	for each (String ^ lineaProyecto in lineas) {
		//Voy a separar cada elemento del String por ; con el split
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ cantPedidos = datos[0];
		listaPedidosEncontrados->Add(cantPedidos);
	}
	return listaPedidosEncontrados;
}

void UsuarioController::EscribirPedidos(List<String^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		String^ objeto = lista[i];
		lineasArchivo[i] = lista[i]+ ";";
	}
	File::WriteAllLines("Pedidos.txt", lineasArchivo);
}

void UsuarioController::cambioPedidos(int fila) {
	List<String^>^ listaPedidos = buscarRequests();
	for (int i = 0; i < listaPedidos->Count; i++) {
		if (i == fila) {
			listaPedidos[i] = "1";
		}
	};
	EscribirPedidos(listaPedidos);
}

void UsuarioController::cancelaPedidos(int fila) {
	List<String^>^ listaPedidos = buscarRequests();
	for (int i = 0; i < listaPedidos->Count; i++) {
		if (i == fila) {
			listaPedidos[i] = "0";
		}
	};
	EscribirPedidos(listaPedidos);
}

int UsuarioController::requestsTotales() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	int listaPedidosEncontrados = 0;
	array<String^>^ lineas = File::ReadAllLines("Pedidos.txt");

	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	//Esta instruccion for each nos permite ir elemento por elemento de un array
	for each (String ^ lineaProyecto in lineas) {
		//Voy a separar cada elemento del String por ; con el split
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ cantPedidos = datos[0];
		listaPedidosEncontrados = listaPedidosEncontrados + Convert::ToInt32(cantPedidos);
	}
	return listaPedidosEncontrados;
}

List<Usuario^>^ UsuarioController::buscarLineasPedidos() {

	List<String^>^ lista = buscarRequests();
	List<Usuario^>^ listaUsuarios = buscarAll_2();
	List<Usuario^>^ listaPedidosEncontrados = gcnew List<Usuario^>();
	for (int i = 0; i < lista->Count; i++) {
		String^ objeto = lista[i];
		if (Convert::ToInt32(objeto) == 1) {
			for (int j = 0; j < listaUsuarios->Count; j++) {
				if (j == i) {
					listaPedidosEncontrados->Add(listaUsuarios[j]);
				}
			}
		}
	}
	return listaPedidosEncontrados;
}


