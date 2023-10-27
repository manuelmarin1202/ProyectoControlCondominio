#include "Usuario.h"
using namespace ProyectoControlCondominioModel;
Usuario::Usuario() {

}

Usuario::Usuario(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni,String^ codigo, String^ nombreFoto):DatosPersonales(nombre, apellidoPaterno, apellidoMaterno, dni,nombreFoto) {
	this->codigo = codigo;
	//this->nombre = nombre;
	//this->apellidoPaterno = apellidoPaterno;
	//this->apellidoMaterno = apellidoMaterno;
	//this->dni = dni;
}

String^ Usuario::getCodigoUsuario() {
	return this->codigo;
}
void Usuario::setCodigoUsuario(String^ codigo) {
	this->codigo = codigo;
}

