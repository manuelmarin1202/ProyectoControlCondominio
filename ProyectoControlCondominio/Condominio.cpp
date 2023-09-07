#include "Condominio.h"

Condominio::Condominio() {

}
Condominio::Condominio(int cantPisos, String^ nombreCondominio, List<Piso^>^ listaPisos) {
	this->cantPisos = cantPisos;
	this->nombreCondominio = nombreCondominio;
	this->listaPisos = listaPisos;
}