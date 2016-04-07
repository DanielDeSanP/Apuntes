#include<iostream>

/*--->Nombres espacio y clases<---*/

using namespace std;

class Deportista{
	private:
		//atributos
		string nombre;
		string tipoDeporte;
		int noJuegos;
		string patrocinador;
		float sueldo;
		string equipo;
		float estatura;
		float peso;
	public:
		//Metodos
		Deportista(){			//Un constructor se encarga de crear el objeto en memoria, se trata de un metodo.
			cout<<"Un nuevo objeto se ha creado"<<endl;
			nombre="vacio";
			sueldo=0;
			estatura=0;
			peso=0;
			patrocinador="Descononocido";
			tipoDeporte="Descononocido";
			equipo="Descononocido";
			sueldo=0;
			noJuegos=0;
			
		}
		Deportista(string nombre, float sueldo, string patrocinador){ //Este es un constructor sobrecargado
			this->nombre=nombre;  //Con this, se accede primero a nombre de la clase, luego a nombre de la funcion
			this->sueldo=sueldo;
			this->patrocinador=patrocinador;
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Sueldo: "<<sueldo<<endl;
			cout<<"Patrocinador: "<<patrocinador<<endl;
		}
		~Deportista(){  //Este es un destructor
			cout<<"Se ha eliminado a "<<nombre<<" :("<<endl;
		}
		void cobrar();
		void entrenar();
		void competir();
		void hidratarse();
		void getInformation();
};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	system("clear");
	Deportista Ronaldinho;
	Deportista Dante("Dante",32000,"Adidas");
	cout<<endl<<endl;
	Dante.getInformation();
	cout<<endl<<endl;
	Ronaldinho.getInformation();
	

	return 0;
}
///////////////////
/*--->Metodos<---*/
void Deportista::getInformation(){
	cout<<"Nombre: "<<nombre<<endl<<"Sueldo: "<<sueldo<<endl<<"Patrocinador: "<<patrocinador<<endl;
}

/*--->Funciones<---*/

