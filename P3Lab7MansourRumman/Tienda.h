#ifndef TIENDA_H
#define TIENDA_H
#include <vector>
#include "Categoria.h"
#include "Articulo.h"
using namespace std;
class Tienda {
	public:
		Tienda();
		void agregarArti(Articulo*,int);
		void mostrarCate();
		int tamanioLista();
		void buscaGen(int,char);
		void listarArti();
		void modApli(int,int);
		void eliminarArti(int);
		void agregarCate(Categoria*);
		void mostrarProductos();	
		~Tienda();
	private:
		vector<Categoria*> listaCate;
		vector<Articulo*> listaApli;
};

#endif