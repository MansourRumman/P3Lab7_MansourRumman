#include "Articulo.h"

Articulo::Articulo(string nombre, vector<char> talla,int precio,int cantidad,int descuento) {
	this->nombre="";
	this->talla=talla;
	this->precio=0;
	this->cantidad=0;
	this->descuento=0;
	this->categoria=categoria;
}
string Articulo:: toString() {
	string retVal;
	retVal= nombre+","+tallaString()+","+to_string(precio)+","+to_string(cantidad)+","+to_string(descuento)+","+categoria->toStringC();
	return retVal;
}
string Articulo::tallaString(){
	string parse="";
	for(int i=0;i<talla.size();i++){
		parse+="[";
		parse+= talla[i];
		parse+= "]";
	}
	return  parse;
}
string Articulo::getNombre() {
	return this->nombre;
}
void Articulo::setNombre(string nombre) {
	this->nombre=nombre;
}
vector<char> Articulo::getTalla() {
	return this->talla;
}
void Articulo::setTalla(vector<char> talla) {
	this->talla=talla;
}
int Articulo::getPrecio() {
	return this->precio;
}
void Articulo::setPrecio(int precio) {
	this->precio=precio;
}
int Articulo::getCantidad() {
	return this->cantidad;
}
void Articulo::setCantidad(int cantidad) {
	this->cantidad=cantidad;
}
int Articulo::getDescuento() {
	return this->descuento;
}
void Articulo::setDescuento(int cantidad) {
	this->cantidad=descuento;
}

Categoria* Articulo::getCategoria() {
	return this->categoria;
}
void Articulo::setCategoria(Categoria* categoria) {
	this->categoria=categoria;
}
bool Articulo::contieneTalla(char t){
	for(int i=0;i<talla.size();i++){
		if(talla[i]==t){
			return true;
		}
	}
	return false;
}

Articulo::~Articulo() {
}