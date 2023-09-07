#include "Familia.h"

Familia::Familia() {

}
Familia::Familia(String^ apellido, int cantInvitados, int CantFamiliares, List<Residente^>^ listaResidentes, List<Invitado^>^ listaInvitados) {
	this->apellido = apellido;
	this->cantInvitados = cantInvitados;
	this->CantFamiliares = CantFamiliares;
	this->listaInvitados = listaInvitados;
	this->listaResidentes = listaResidentes;
}