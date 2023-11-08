#include "Usuario.h"
using namespace ProyectoControlCondominioModel;
Usuario::Usuario() {

}

Usuario::Usuario(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ codigo, String^ nombreFoto, String^ contraseña) : DatosPersonales(nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña) {
	this->codigo = codigo;
	//this->nombre = nombre;
	//this->apellidoPaterno = apellidoPaterno;
	//this->apellidoMaterno = apellidoMaterno;
	//this->dni = dni;
	//this->contraseña = contraseña;
}

String^ Usuario::getCodigoUsuario() {
	return this->codigo;
}
void Usuario::setCodigoUsuario(String^ codigo) {
	this->codigo = codigo;
}
/*String^ Usuario::getContraseña() {
	return this->contraseña;
}
void Usuario::setContraseña(String^ contraseña) {
	this->codigo = contraseña;
}*/
