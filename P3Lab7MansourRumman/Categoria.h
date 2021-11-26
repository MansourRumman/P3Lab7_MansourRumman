#ifndef CATEGORIA_H
#define CATEGORIA_H
#include <string>
using namespace std;

class Categoria {
	public:
		Categoria(string);
		string toStringC();
		~Categoria();
	private:
		string type;
};

#endif