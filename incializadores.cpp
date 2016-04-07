#include<iostream>

/*--->Nombres espacio y clases<---*/

using namespace std;
class Cantina{
	public:
		Cantina(){
			cout<<"Con constructor vacio "<<endl;
		}
		Cantina(string n, string z, string e):nombre(n),zona(z),especialidad(e) //Esto es un inicializador
		{																		//Lo que esta en el parentesis es la variable del constructor
																				//y lo de afuera es el atributo de la clase
			cout<<"La cantina se llama "<<nombre<<" y esta en la zona "<<zona<<" y su especialidad es "<<especialidad<<endl; 
		}
	private:
		string nombre;
		string zona;
		string especialidad;
		int maxClientes;
};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	
	system("clear");
	Cantina elGimnacio;
	Cantina laFacu("La facu","Rosa","Micheladas");

	return 0;
}
///////////////////
/*--->Metodos<---*/


/*--->Funciones<---*/

