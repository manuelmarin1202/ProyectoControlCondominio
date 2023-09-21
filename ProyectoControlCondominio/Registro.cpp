#include "Registro.h"
using namespace ProyectoControlCondominioModel;
Registro::Registro() {

}
Registro::Registro(int cantIntrusos, int cantIngresos, String^ numeroEmergencias) {
	this->cantIngresos = cantIngresos;
	this->cantIntrusos = cantIntrusos;
	this->numeroEmergencias = numeroEmergencias;
}