#include "Guardia.h"
using namespace ProyectoControlCondominioModel;

Guardia::Guardia() {

}
Guardia::Guardia(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreFoto, String^ contraseña, int codigo, String^ categoria, double sueldo) : DatosPersonales(nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña) {
	this->codigo = codigo;
	this->categoria = categoria;
	this->sueldo = sueldo;
}
int Guardia::getCodigoGuardia() {
	return this->codigo;
}
void Guardia::setCodigoGuardia(int codigo) {
	this->codigo = codigo;
}
String^ Guardia::getCategoria() {
	return this->categoria;
}
void Guardia::setCategoria(String^ categoria) {
	this->categoria = categoria;
}
double Guardia::getSueldo() {
	return this->sueldo;
}
void Guardia::setSueldo(double sueldo) {
	this->sueldo = sueldo;
}