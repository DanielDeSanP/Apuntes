#include<iostream>
#include<fstream>

/*--->Nombres espacio y clases<---*/

using namespace std;

/*--->Funciones Prototipo<---*/


///////////////////

int main(){

	ofstream escritura;   //Se crean objetos, que pasaran a ser archivos con sus respectivos nombres, este es de modo escritura
	ifstream lectura;	//En este caso se abre un objeto en modo lectura

	escritura.open("Mitexto.txt",ios::out|ios::app); //Con .open, se abre el archivo, o en su defecto se crea, con el iosapp se concadena
	cout<<"Chido tu cotorreo"<<endl; 
	escritura<<"Ahorita no joven"<<endl;
	escritura.close();
	lectura.open("Mitexto.txt",ios::in);
	if(lectura.fail())
		cout<<"No se pudo abrir el archivo"<<endl;
	else{
		cout<<"Se pudo abrir el archivo"<<endl;
		string cadena;
		getline(cin,cadena);
		while(! lectura.eof()){ //Va recibiendo datos hasta el final del texto.
			getline(lectura,cadena); //Es un metodo de la clase string
			cout<<cadena<<endl;

		}
	}
	lectura.close();

	

	return 0;
}
///////////////////
/*--->Metodos<---*/


/*--->Funciones<---*/

