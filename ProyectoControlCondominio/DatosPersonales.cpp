#include "DatosPersonales.h"

DatosPersonales::DatosPersonales() {

}

DatosPersonales::DatosPersonales(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni) {
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno =apellidoMaterno;
	this->dni = dni;
}