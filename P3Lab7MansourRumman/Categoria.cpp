#include "Categoria.h"

Categoria::Categoria(string type) {
	this->type=type;
}
string Categoria:: toStringC(){
	return type;
}
Categoria::~Categoria() {
}