#include "Apartamento.h"
using namespace ProyectoControlCondominioModel;
Apartamento::Apartamento() {

}
Apartamento::Apartamento(String^ numeroApartamento, bool disponible) {
	this->numeroApartamento = numeroApartamento;
	this->disponible = disponible;
}