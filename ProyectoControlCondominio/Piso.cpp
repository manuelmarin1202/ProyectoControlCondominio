#include "Piso.h"
using namespace ProyectoControlCondominioModel;
Piso::Piso() {

}
Piso::Piso(int numApartamentos, int numPiso, List<Apartamento^>^ listaApartamentos) {
	this->numApartamentos = numApartamentos;
	this->numPiso = numPiso;
	this->listaApartamentos = listaApartamentos;
}