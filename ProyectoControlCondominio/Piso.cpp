#include "Piso.h"

Piso::Piso() {

}
Piso::Piso(int numApartamentos, int numPiso, List<Apartamento^>^ listaApartamentos) {
	this->numApartamentos = numApartamentos;
	this->numPiso = numPiso;
	this->listaApartamentos = listaApartamentos;
}