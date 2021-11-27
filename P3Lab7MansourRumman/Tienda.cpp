#include "Tienda.h"
#include <iostream>
using namespace std;

Tienda::Tienda() {

}
void Tienda::agregarArti(Articulo* articulo,int cat) {
	articulo->setCategoria(listaCate[cat]);
	listaApli.push_back(articulo);

}
void Tienda:: eliminarArti( int pos) {
	listaApli.erase(listaApli.begin()+pos);
}

void Tienda::mostrarCate() {
	for(int i=0; i<listaCate.size(); i++) {
		cout<<listaCate[i]->toStringC()<<endl;
	}
	cout<<endl;
}
void Tienda::listarArti() {
	for(int i=0; i<listaApli.size(); i++) {
		cout<<listaApli[i]->toString()<<endl;
	}
}		
void Tienda:: mostrarProductos(){
	for(int i=0;i<listaCate.size();i++){
		cout<<listaCate[i]->toStringC();
		for(int j=0;j<listaApli.size();j++){
			if(listaCate[i]==listaApli[j]->getCategoria()){
				cout<<listaApli[j]->toString();
			}
		}
	}
}
void Tienda::modApli(int pos, int copcion) {
	switch(copcion) {
		case 1: {
			string n;
			cout<<"ingrese el nuevo nombre"<<endl;
			cin>>n;
			listaApli[pos]->setNombre(n);
			break;
		}
		case 2: {
			int p;
			cout<<"ingrese el nuevo precio"<<endl;
			cin>>p;
			listaApli[pos]->setPrecio(p);
			break;
		}
		case 3: {
			int c;
			cout<<"ingrese el nueva cantidad"<<endl;
			cin>>c;
			listaApli[pos]->setCantidad(c);

			break;
		}
		case 4: {
			int d;
			cout<<"ingrese el nuevo descuento"<<endl;
			cin>>d;
			listaApli[pos]->setDescuento(d);

			break;
		}
		case 5: {
			int cate;
			mostrarCate();
			cout<<"ingrese el nueva categoria"<<endl;
			cin>>cate;
			listaApli[pos]->setCategoria(listaCate[cate]);
			break;
		}
	}

}
int Tienda::tamanioLista() {
	return listaCate.size();
}
void Tienda::buscaGen(int busC, char busT) {
	bool buscarC=true;
	bool buscarT=true;
	string categoriabus="";
	if(busC==tamanioLista()+1) {
		buscarC=false;
	} else {
		categoriabus=listaCate[busC]->toStringC();
	}
	if(busT=='N') {
		buscarT=false;
	}
	for(int i=0; i<listaCate.size(); i++) {
		if(buscarC) {
			for(int j=0; j<listaApli.size(); j++) {
				if(buscarT) {
					if(listaApli[j]->contieneTalla(busT)) {
						cout<<listaApli[j]->toStringb()<<endl;
					}
				} else {
					cout<<listaApli[j]->toStringb()<<endl;
				}
			}
		} else {
			for(int j=0; j<listaApli.size(); j++) {
				if(buscarT) {
					if(listaApli[j]->contieneTalla(busT)) {
						cout<<listaApli[j]->toStringb()<<endl;
					}
				} else {
					cout<<listaApli[j]->toStringb()<<endl;
				}
			}
		}
	}
}

void Tienda::agregarCate(Categoria* categoria) {
	this->listaCate.push_back(categoria);
}
Tienda::~Tienda() {
	for(int i=0; listaApli.size(); i++) {
		delete listaApli[i];
	}
	for(int i=0; listaCate.size(); i++) {
		delete listaCate[i];
	}
}