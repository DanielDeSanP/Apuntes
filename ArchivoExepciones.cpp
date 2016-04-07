#include<iostream>
#include<exception>
#include<fstream>
/*
Notas:

*/

/*--->Nombres espacio y clases<---*/

using namespace std;

class noAbiriArchivo : public exception{
public:
	const char* que_paso() const throw(){
			return "Error no se puede abrir";
	}
};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	string nombre;
	ofstream escritura;
	ifstream lectura;

	cout<<"Dame el nombre del archivo, recuerda agregar el .txt"<<endl;
	getline(cin, nombre);
	escritura.open(nombre,ios::out|ios::app);
	escritura<<"Hola me llamo RS95"<<endl;
	escritura.close();
	cout<<"Dame de nuevo el nombre del archivo para leerlo"<<endl;
	getline(cin, nombre);
	try{
	lectura.open(nombre,ios::in);
	if(lectura.fail())throw noAbiriArchivo();
	cout<<"Si se abrio el archivo";

	}catch(noAbiriArchivo& error){
		cout<<error.que_paso()<<endl;
	}



	

	return 0;
}
///////////////////
/*--->Metodos<---*/


/*--->Funciones<---*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////