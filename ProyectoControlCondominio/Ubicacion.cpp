#include "Ubicacion.h"

Ubicacion::Ubicacion() {

}
Ubicacion::Ubicacion(String^ Departamento, String^ Provincia, String^ Distrito) {
	this->Departamento = Departamento;
	this->Provincia = Provincia;
	this->Distrito = Distrito;
}