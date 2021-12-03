#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <string>
#include "Tienda.h"
#include "Categoria.h"
#include "Articulo.h"
using namespace std;
int menu();
int smenu();
int main(int argc, char** argv) {
	Tienda* tienda=new Tienda();
	int opcion = 0;
	int opcion2 = 0;
	while (opcion != 5) {
		switch(opcion = menu() )  {
			case 1: {
				string cate;
				cout<<"ingrese la categoria"<<endl;
				cin>>cate;
				tienda->agregarCate(new Categoria(cate));
				break;
			}
			case 2: {
				switch(opcion2 = smenu()) {
					case 1: {
						int categoria;
						string nombre;
						vector<char> tallas;
						int opcion=0;
						int precio,cantidad,descuento;
						cout<<"ingrese el nombre"<<endl;
						cin>>nombre;
						while(opcion!=2) {
							char talla;
							cout<<"quiere ingresar talla 1.-si/2.-no"<<endl;
							cin>>opcion;
							if(opcion==1) {
								cout<<"ingrese el talla"<<endl;
								cin>>talla;
								tallas.push_back(talla);
							}
						}
						cout<<"ingrese el precio"<<endl;
						cin>>precio;
						cout<<"ingrese el cantidad"<<endl;
						cin>>cantidad;
						cout<<"ingrese el descuento"<<endl;
						cin>>descuento;
						tienda->mostrarCate();
						cout<<endl;
						cout<<"ingrese la categoria"<<endl;
						cin>>categoria;
						tienda->agregarArti(new Articulo(nombre,tallas,precio,cantidad,descuento),categoria);
						break;
					}
					case 2: {
						int copcion=0;
						int pos=0;
						tienda->listarArti();
						cout<<"ingrese la posicion a modificar"<<endl;
						cin>>pos;
						cout<< "que quiere modificar"<<endl
						    <<"1)nombre"<<endl
						    <<"2)precio"<<endl
						    <<"3)cantidad"<<endl
						    <<"4)descuento"<<endl
						    <<"5)categoria"<<endl
						    <<"ingrese su opcion:";
						cin>>copcion;
						tienda->modApli(pos,copcion) ;
						break;
					}
					case 3: {
						int pos=0;
						cout<<"ingrese la posicion a eliminar"<<endl;
						cin>>pos;
						tienda->eliminarArti(pos);
						break;

					}
					case 4: {
						tienda->listarArti();
						break;
					}
				}
				break;
			}
			case 3: {
				tienda->mostrarProductos();

				break;
			}
			case 4: {
				int busC;
				char busT;
				tienda->mostrarCate();
				cout<<tienda->tamanioLista()+1;
				cout<<" )ninguna"<<endl;
				cout<<"elija su opcion"<<endl;
				cin>>busC;
				cout<<"que talla desea buscar(S/M/L/N)"<<endl;
				cin>>busT;
				tienda->buscaGen(busC,busT);
				break;
			}

		}

	}
	delete tienda;

	return 0;
}

int menu() {
	int opcion=0;
	cout<<"Menu"<<endl
	    <<"1)Agregar Categoria"<<endl
	    <<"2)Mantenimiento de  Articulos"<<endl
	    <<"3)Estadisticas generales"<<endl
	    <<"4)Busqueda por categoria y talla"<<endl
	    <<"5)salir"<<endl
	    <<"ingrese su opcion:";
	cin>>opcion;
	return opcion;
}
int smenu() {
	int opcion = 0;
	cout<<"Menu de Mantenimiento\n"
	    <<"1. Agregar Articulo\n"
	    <<"2. Modificar Artículo\n"
	    <<"3.Eliminar Artículo\n"
	    <<"4.listar articulo\n"
	    <<"Ingrese Opcion: ";
	cin >> opcion;
	return opcion;
}