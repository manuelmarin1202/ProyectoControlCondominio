//#include <iostream>
#include "UsuarioController.h"

using namespace ProyectoControlCondominioController;
//using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;

UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();
}

void UsuarioController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void UsuarioController::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Usuario^>^ UsuarioController::buscarUsuarios(String^ ApellidoPaterno) { //SQL
	/*
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
	return listaUsuariosEncontrados;*/
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario where ApellidoPaterno like '%" + ApellidoPaterno + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]);  
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
		listaUsuarios->Add(objUsuario);
	}
	CerrarConexionBD();
	return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarAll() { //SQL
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
/* List<Usuario^>^ listaProyectosEncontrados = gcnew List<Usuario^>();
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
return listaProyectosEncontrados; */

List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
AbrirConexionBD();
SqlCommand^ objSentencia = gcnew SqlCommand();
objSentencia->Connection = this->objConexion;
objSentencia->CommandText = "SELECT*FROM Usuario";
SqlDataReader^ objData = objSentencia->ExecuteReader();
while (objData->Read()) {
	String^ codigo = safe_cast<String^>(objData[0]);
	String^ nombre = safe_cast<String^>(objData[1]);
	String^ apellidoPaterno = safe_cast<String^>(objData[2]);
	String^ apellidoMaterno = safe_cast<String^>(objData[3]);
	String^ dni = safe_cast<String^>(objData[4]);
	String^ contraseña  = safe_cast<String^>(objData[5]);  
	String^ nombreFoto = safe_cast<String^>(objData[6]);

	Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
	listaUsuarios->Add(objUsuario);
}
CerrarConexionBD();
return listaUsuarios;
}

/*List<Usuario^>^ UsuarioController::buscarAll_3() {
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
*/

/*void UsuarioController::EscribirArchivo_2(List<Usuario^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		//Usuario^ objeto = gcnew Usuario();
		Usuario^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigoUsuario() + ";" + objeto->getNombres() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni()+";"+objeto->getNombreFoto() + ";" + objeto->getContraseña();
	}
	File::WriteAllLines("usuarios.txt", lineasArchivo);
}
*/

void UsuarioController::agregarUsuario(Usuario^ objUsuario) { //SQL
	/*List<Usuario^>^ listaUsuarios = buscarAll_2();
	List<Usuario^>^ listaCambios = buscarCambioDatos();
	List<String^>^ listaRequests = buscarRequests();
	listaUsuarios->Add(objUsuario);
	listaCambios->Add(objUsuario);
	listaRequests->Add("0");
	EscribirArchivo_2(listaUsuarios);
	EscribirCambioDatos(listaCambios);
	EscribirPedidos(listaRequests);
	*/
	AbrirConexionBD();
	String^ codigo = objUsuario->getCodigoUsuario(); 	
	String^ nombre = objUsuario->getNombres(); 
	String^ apellidoPaterno = objUsuario->getApellidoPaterno();
	String^ apellidoMaterno = objUsuario->getApellidoMaterno(); 
	String^ dni = objUsuario->getDni(); 
	String^ nombreFoto = objUsuario->getNombreFoto(); 
	String^ contraseña = objUsuario->getContraseña();  
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Usuario(Codigo,Nombre,ApellidoPaterno,ApellidoMaterno,Dni,NombreFoto,Contraseña)values('" + codigo + "','" + nombre + "','" + apellidoPaterno + "','" + apellidoMaterno + "','" + dni + "','" + nombreFoto + "','" + contraseña + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void UsuarioController::eliminarUsuarioFisico(String^ codigo) {
	/* List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			listaUsuarios->RemoveAt(i);
		}
	}
	EscribirArchivo_2(listaUsuarios);
	*/
	AbrirConexionBD(); 
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM Usuario WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(String^ codigo) { //SQL
	/* List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			return listaUsuarios[i];
		}
	}
	*/
	Usuario^ objUsuario; 
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario where Codigo= '"+ codigo +"'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		//List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); 
		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
	}
	CerrarConexionBD();
	return objUsuario;
}

/*Usuario^ UsuarioController::buscarUsuarioCambioxCodigo(String^ codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll_3();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			return listaUsuarios[i];
		}
	}
*/

void UsuarioController::actualizarUsuario(Usuario^ objUsuario) {
	/* List<Usuario^>^ listaUsuarios = buscarAll_2();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == objUsuario->getCodigoUsuario()) {
			//Voy a actualizar cada dato de ese proyecto en la lista
		listaUsuarios[i]->setCodigoUsuario(objUsuario->getCodigoUsuario());
		listaUsuarios[i]->setNombres(objUsuario->getNombres());
		listaUsuarios[i]->setApellidoPaterno(objUsuario->getApellidoPaterno());
		listaUsuarios[i]->setApellidoMaterno(objUsuario->getApellidoMaterno());
		listaUsuarios[i]->setDni(objUsuario->getDni());
		listaUsuarios[i]->setNombreFoto(objUsuario->getNombreFoto());
		listaUsuarios[i]->setContraseña(objUsuario->getContraseña());
		break;
		}
	}
	EscribirArchivo_2(listaUsuarios);
	EscribirCambioDatos(listaUsuarios);
	*/
	String^ codigo = objUsuario->getCodigoUsuario(); 
	String^ nombre = objUsuario->getNombres(); 
	String^ apellidoPaterno = objUsuario->getApellidoPaterno(); 
	String^ apellidoMaterno = objUsuario->getApellidoMaterno(); 
	String^ dni = objUsuario->getDni(); 
	String^ nombreFoto = objUsuario->getNombreFoto(); 
	String^ contraseña = objUsuario->getContraseña();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Usuario SET Codigo='" + codigo + "',Nombre='" + nombre + "',ApellidoPaterno='" + apellidoPaterno + "',ApellidoMaterno='" + apellidoMaterno + "',Dni='" + dni + "',NombreFoto='" + nombreFoto + "',Contraseña='" + contraseña + "' WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}


List<String^>^ UsuarioController::obtenerApellidos() {
	List<Usuario^>^ listaUsuarios = buscarAll();
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

/* Bitmap^ UsuarioController::leerArchivo(String^ nombreArchivo) {
	Bitmap^ FondoTotal = gcnew Bitmap(nombreArchivo);
	return FondoTotal;
}
*/

String^ UsuarioController::obtenerNombreFoto(String^ nombreFotoLargo) {
	String^ separadores = "\\";
	//Convert::ToString(0x5C)
	array<String^>^ datos = nombreFotoLargo->Split(separadores->ToCharArray());
	String^ nombreFoto;
	int num = datos->Length;
	nombreFoto = datos[num - 1];
	return nombreFoto;
}

int UsuarioController::ConfirmarUsuario(String^ codigousuario,String^ contra) {
	/*array<String^>^ lineas = File::ReadAllLines("usuarios.txt");
	String^ separadores = ";"; // Aqui defino el caracter por el cual voy a separar la informacion de cada linea

	int existe = 0;
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ contraAdmin = datos[0];
		if (contraAdmin == contra) {
			existe = 1;
		}
	}
	return existe; */
	int confirmar=0;
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 
		List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
		listaUsuarios->Add(objUsuario); 
		if (codigo == codigousuario) {
			if (contraseña == contra) {
				confirmar = 1;
			}
		}
	}
	CerrarConexionBD();
	return confirmar;

}

/* int UsuarioController::ConfirmarContra(String^ codigover, String^ contra) {
	int existe = 0;
	Usuario^ objUsuario = buscarUsuarioxCodigo(codigover);
	String^ contraseña = objUsuario->getContraseña();
	if (contraseña == contra) {
		existe = 1;
	}
	return existe;
}
*/

/*void UsuarioController::EscribirCambioDatos(List<Usuario^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		Usuario^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigoUsuario() + ";" + objeto->getNombres() + ";" + objeto->getApellidoPaterno() + ";" + objeto->getApellidoMaterno() + ";" + objeto->getDni() + ";" + objeto->getNombreFoto() + ";" + objeto->getContraseña();
	}
	File::WriteAllLines("PedidosCambioDatos.txt", lineasArchivo);
}
*/


/*int UsuarioController::actualizarCambioDatos(Usuario^ objProyecto) {
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
*/

/*List<Usuario^>^ UsuarioController::buscarCambioDatos() {
	En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
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
	

}*/ 

/* List<String^>^ UsuarioController::buscarRequests() {
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
*/
/*
void UsuarioController::EscribirPedidos(List<String^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		String^ objeto = lista[i];
		lineasArchivo[i] = lista[i]+ ";";
	}
	File::WriteAllLines("Pedidos.txt", lineasArchivo);
}
*/

/*
void UsuarioController::cambioPedidos(int fila) {
	List<String^>^ listaPedidos = buscarRequests();
	for (int i = 0; i < listaPedidos->Count; i++) {
		if (i == fila) {
			listaPedidos[i] = "1";
		}
	};
	EscribirPedidos(listaPedidos);
}
*/

/*
void UsuarioController::cancelaPedidos(int fila) {
	List<String^>^ listaPedidos = buscarRequests();
	for (int i = 0; i < listaPedidos->Count; i++) {
		if (i == fila) {
			listaPedidos[i] = "0";
		}
	};
	EscribirPedidos(listaPedidos);
}
*/


int UsuarioController::requestsTotales() {
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	/*
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
	*/
	int cuenta = 0;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM PedidoCambio";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		cuenta++;
	}
	CerrarConexionBD();
	return cuenta;
}


void UsuarioController::agregarSolicitud(Usuario^ objUsuario) { //SQL

	AbrirConexionBD();
	String^ codigo = objUsuario->getCodigoUsuario();
	String^ nombre = objUsuario->getNombres();
	String^ apellidoPaterno = objUsuario->getApellidoPaterno();
	String^ apellidoMaterno = objUsuario->getApellidoMaterno();
	String^ dni = objUsuario->getDni();
	String^ nombreFoto = objUsuario->getNombreFoto();
	String^ contraseña = objUsuario->getContraseña();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into PedidoCambio(Codigo,Nombre,ApellidoPaterno,ApellidoMaterno,Dni,NombreFoto,Contraseña)values('" + codigo + "','" + nombre + "','" + apellidoPaterno + "','" + apellidoMaterno + "','" + dni + "','" + nombreFoto + "','" + contraseña + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void UsuarioController::eliminarSolicitud(String^ codigo) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM PedidoCambio WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Usuario^>^ UsuarioController::buscarAllPedidos() { //SQL

	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); 
	AbrirConexionBD(); 
	SqlCommand^ objSentencia = gcnew SqlCommand(); 
	objSentencia->Connection = this->objConexion; 
	objSentencia->CommandText = "SELECT*FROM PedidoCambio";  
	SqlDataReader^ objData = objSentencia->ExecuteReader();  
	while (objData->Read()) {  
		String^ codigo = safe_cast<String^>(objData[0]);  
		String^ nombre = safe_cast<String^>(objData[1]);  
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
		listaUsuarios->Add(objUsuario); 
	} 
	CerrarConexionBD(); 
	return listaUsuarios; 
} 

Usuario^ UsuarioController::buscarPedidoxCodigo(String^ codigo) { 
	Usuario^ objUsuario;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM PedidoCambio where Codigo= '" + codigo + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ contraseña = safe_cast<String^>(objData[5]);
		String^ nombreFoto = safe_cast<String^>(objData[6]);

		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
	}
	CerrarConexionBD();
	return objUsuario;
}
/*
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
*/


