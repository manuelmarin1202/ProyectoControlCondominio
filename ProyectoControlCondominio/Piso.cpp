#include "Piso.h"
using namespace ProyectoControlCondominioModel;
Piso::Piso() {

}
Piso::Piso(int codigo, int numApartamentos, int codigoEdificio, int numPiso) {
	this->codigo = codigo;
	this->numApartamentos = numApartamentos;
	this->codigoEdificio = codigoEdificio;
	this->numPiso = numPiso;
}
int Piso::getCodigo() {
	return this->codigo;
}
void Piso::setCodigo(int codigo) {
	this->codigo = codigo;
}
int Piso::getNumApartamentos() {
	return this->numApartamentos;
}
void Piso::setNumApartamentos(int numApartamentos) {
	this->numApartamentos = numApartamentos;
}
int Piso::getCodigoEdificio() {
	return this->codigoEdificio;
}
void Piso::setCodigoEdificio(int codigoEdificio) {
	this->codigoEdificio = codigoEdificio;
}
int Piso::getNumPiso() {
	return this->numPiso;
}
void Piso::setNumPiso(int numPiso) {
	this->numPiso = numPiso;
}