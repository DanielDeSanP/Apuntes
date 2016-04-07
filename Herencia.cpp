#include<iostream>
/*
Notas:
1.
Cuando un constructor y un destructor predeterminado se inicia, o sea que no tienen parametros de entrada
se debe de definir, aunque sea con nada, de lo contrario el compilador marcará error.
2.
Cuando se crea una clase hija, que en este caso es caballo, esta hereda los parametros de la clase padre
que es Mamifero, pero notese que cuando se crea un objeto del tipo caballo, se llama primero el constructor
de mamifer y luego de caballo, posteriormente el destructor de caballo y luego de mamifero
3.
Cuando se quiere decalarar una clase hija se debe poner el nombre de la clase hija y la seccion (privada o publica)
a la que va a tener acceso la clase hija 
4.
Una caracteristica de la herencia, es que en caso de que la clase hija tenga un metodo redefinido, es decir
un metodo que ya aparece en la clase padre, se ejecuta el metodo de la clase hija.
5.
Por el contrario si no hay un metodo que sustituya el metodo de la clase padre, se usa tanto en padre como en hija
el mismo metodo.

Protected 
Solo las clases definidas en la clase padre tienen acceso a esta seccion

6.
Los metodos de la clase padre también pueden ser transferibles a las clases hijas, si estan  en la seccion que les correspnde.
7.
En este constructor de caballo, se reciben tres valores, dos de los cuales le corresponden al constructor de Mamifero, y
el tercero le corresponde al de caballo, entonces cuando se crea al objeto, se definen tres valores, y por lo tanto se llama a 
este constructor. En otros casos, se llaman a los otros constructores. En resumen si se requiere poner un valor en especifico en 
el constructo de caballo se debe de de especificar.
8.
En este caso tenemos una clase derivada que hereda de dos clases, que en este caso son clase Aguila y clase Caballo
entonces tiene todacia mas caracteristicas.CUIDADO: Hay que tener en cuenta de que si se va a heredar de dos clases
 se debe verificar que no hayan dos metodos con el mismo nombre, debido a que se van a presentar problemas de ambigüedad.

*/
/*--->Nombres espacio y clases<---*/

using namespace std;


class Mamifero{
private:
	//Atributos
	string Especie;
	int suEdad;
	float suPeso;
	///////////
public:
	//Constructores y destructores
	Mamifero(); //--1
	Mamifero(string especie);
	Mamifero(int Edad, float Peso);
	Mamifero(int Edad);
	Mamifero(float Peso);
	~Mamifero();
	///////////////////////////////
	//Metodos de acceso publico
	void Hablar();
	void Moverse();
	void Moverse(int pasos);
	void Comer();
	/////////////////////////
	//getters y setters
	int getEdad();
	int getPeso();
	/////////////////

};

class Aguila{
public:
	Aguila(){
		cout<<"Un nuevo miembro de las aguilas a aparecido"<<endl;
	}
	~Aguila(){
		cout<<"Hemos perdido a otro :("<<endl;
	}	
	void volar(){
		cout<<"Se que puedo volaaaaaar!!!!"<<endl;
	}

};

class Caballo : public Mamifero{ //--3
private:
	//Atributos
	int suTamanio;
	///////////////
public:
	//Metodos
	void Hablar();
	///////////////
	//Setters y getters
	void modifcarTamanio(int tamanio);
	int getTamanio();
	///////////////
	//Constructores
	Caballo();
	Caballo(int edad, int peso, int tamanio);
	Caballo(int tamanio);
	~Caballo();
	///////////////
};
class Pegaso : public Caballo, public Aguila{//--8
public:
	Pegaso();
	~Pegaso(){
		cout<<"Soy un pegaso zombi"<<endl<<endl;
	}

};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	system("clear");
	Caballo Teicy(9,8,9); //--2
	Mamifero Dony(9);
	Mamifero Dusty(8,3);
	Caballo Dini(5,9,7);
	cout<<endl<<endl;
	/*

	cout<<"Dony tiene "<<Dony.getEdad()<<" Anios"<<endl;  //--6
	cout<<"Dusty tiene "<<Dusty.getEdad()<<" Anios"<<endl;
	cout<<"Teicy tiene "<<Teicy.getEdad()<<" Anios"<<endl;
	cout<<"Dini tiene "<<Dini.getEdad()<<" Anios"<<endl;
	cout<<"Dini pesa "<<Dini.getPeso()<<endl;
	cout<<"Dusty pesa "<<Dusty.getPeso()<<endl;

	cout<<endl<<endl<<endl;
	cout<<"El tamanio de Dini es: "<<Dini.getTamanio()<<" m"<<endl;
	cout<<"El tamanio de Teicy es: "<<Teicy.getTamanio()<<" m"<<endl;
	//Teicy.Hablar(); //--4
	//Dony.Hablar();
	//Teicy.Moverse(); //--5
	//Dony.Moverse();	
	cout<<"La edad de Teicy es: "<<Teicy.getEdad()<<" y su peso es: "<<Teicy.getPeso()<<endl;
	cout<<"La edad de Dony es: "<<Dony.getEdad()<<" y su peso es: "<<Dony.getPeso()<<endl;
	*/
	Pegaso Seiya;
	Aguila Atila;

	Atila.volar();
	cout<<"Seiya: "<<endl;
	Seiya.Moverse();
	Seiya.Hablar();
	Seiya.volar();


	cout<<endl<<endl<<endl;

	

	return 0;
}
///////////////////
/*--->Metodos<---*/

void Mamifero::Hablar(){
	cout<<"Sonido de mamifero"<<endl;
}
void Mamifero::Moverse(){
	cout<<"Se ha mueve un metro"<<endl;

}
void Mamifero::Moverse(int metros){
	cout<<"Se ha movido "<<metros<<" numero de pasos."<<endl;
}
void Mamifero::Comer(){
	cout<<"El mamifero esta comiendo"<<endl;
}



//Constructores
Mamifero::Mamifero(string especie):Especie(especie){
	cout<<"El "<<Especie<<" acaba de nacer"<<endl;
	suEdad=1;
	suPeso=1;
}
Mamifero::Mamifero(){
	cout<<"Constructores (int mamifero)"<<endl;
	suEdad=1;
	suPeso=1;
}
Mamifero::Mamifero(int edad){
	suEdad=edad;
	cout<<"Constructor (int) Mamifero"<<endl;
	suPeso=1;
}
Mamifero::Mamifero(float peso):suPeso(peso){
	cout<<"Constructor (int) Mamifero"<<endl;
	suEdad=1;
}
Mamifero::Mamifero(int edad, float peso):suEdad(edad),suPeso(peso){
	cout<<"Constructor (int) Mamifero"<<endl;
}
Mamifero::~Mamifero(){
	cout<<"El mamifero acaba de morir"<<endl;
}



//Setters y getters
int Mamifero::getPeso(){
	return suPeso;
}
int Mamifero::getEdad(){
	return suEdad;
}




//Metodos de caballo
void Caballo::Hablar(){
	cout<<"Hablo como caballo"<<endl;
}
//Setters y getters
int Caballo::getTamanio(){
	return suTamanio;
}



//Constructores
Caballo::Caballo(int edad, int peso, int tamanio):Mamifero(edad,peso),suTamanio(tamanio){ //---7
	cout<<"El caballo acaba de nacer"<<endl;

}
Caballo::Caballo(){
	cout<<"El caballo acaba de nacer"<<endl;
	suTamanio=1;
}

Caballo::~Caballo(){
	cout<<"El caballo acaba de morir"<<endl;
}
Caballo::Caballo(int tamanio){
	cout<<"El caballo acaba de nacer"<<endl;
	suTamanio=tamanio;

}


//Metodos Pegaso

Pegaso::Pegaso(){
	cout<<"Hola soy un pegaso"<<endl<<endl<<endl;
}

///////////////

/*--->Funciones<---*/

