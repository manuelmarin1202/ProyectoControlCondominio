#include "Apartamento.h"

Apartamento::Apartamento() {

}
Apartamento::Apartamento(String^ numeroApartamento, bool disponible) {
	this->numeroApartamento = numeroApartamento;
	this->disponible = disponible;
}