#ifndef ARTICULO_H
#define ARTICULO_H
#include <string>
#include "Categoria.h"
#include <vector>
using namespace std;
class Articulo {
	public:
		Articulo(string, vector<char>,int,int,int);
		~Articulo();
		string getNombre();
		void setNombre(string);
		vector<char> getTalla();
		void setTalla(vector<char>);
		int getPrecio();
		void setPrecio(int);
		int getCantidad();
		void setCantidad(int);
		int getDescuento();
		void setDescuento(int);
		Categoria* getCategoria();
		void setCategoria(Categoria*);
		string toString();
		string tallaString();
		bool contieneTalla(char);
	private:
		string nombre;
		vector<char> talla;
		int precio;
		int cantidad;
		int descuento;
		Categoria* categoria;
		
};

#endif