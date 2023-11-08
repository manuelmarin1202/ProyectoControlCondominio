#include "Usuario.h"
using namespace ProyectoControlCondominioModel;
Usuario::Usuario() {

}

Usuario::Usuario(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ codigo, String^ nombreFoto, String^ contrase�a) : DatosPersonales(nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contrase�a) {
	this->codigo = codigo;
	//this->nombre = nombre;
	//this->apellidoPaterno = apellidoPaterno;
	//this->apellidoMaterno = apellidoMaterno;
	//this->dni = dni;
	//this->contrase�a = contrase�a;
}

String^ Usuario::getCodigoUsuario() {
	return this->codigo;
}
void Usuario::setCodigoUsuario(String^ codigo) {
	this->codigo = codigo;
}
/*String^ Usuario::getContrase�a() {
	return this->contrase�a;
}
void Usuario::setContrase�a(String^ contrase�a) {
	this->codigo = contrase�a;
}*/
