#include "Edificio.h"

using namespace ProyectoControlCondominioModel;
Edificio::Edificio() {

}
Edificio::Edificio(int cantPisos, int aforo, String^ codigo, List<Piso^>^ listaPisos) {
	this->cantPisos = cantPisos;
	this->codigo = codigo;
	this->listaPisos = listaPisos;
	this->aforo = aforo;
}