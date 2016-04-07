///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
/*
Notas:
Polimorfimso
Se puede resumir a refersise a una clase padre mediante sus diferentes representaciones, es decir mediante
sus clases descendientes.
1.- 
Hay que recordar que con el operador -> se accede a algun metodod de algun objeto contenido en memoria dinamica, 
o que sea apuntado por una apuntador, 2se podria considerar sustituto del operador punto.

Reglas de metodos virutales

Se tiene por costumbre poner los destructores virtuales, al igual que los demas metodos sobrescritos.

*
Cuando se van a usar metodos virtuales, el metodo que va a ser declarado en principio virtual debe estar
en la clase con mayor jerarquia y tambien debe de estar dentro de la defincion de esta. Esto tambien 
aplica para los otros metodos afectados de las clases descendientes, deben de estar dentro de la definicion de clase 
como en los ejemplos.
*/

/*--->Nombres espacio y clases<---*/

using namespace std;

class Trabajador{
private:
	//Atributos
	int sueldo;
	int ID;
	int edad;
	string puesto;
	int vacaciones;
	///////////////
public:
	//Metodos
	virtual void Trabajar(){	//-----*
	cout<<"Tengo que trabajar para poder comer"<<endl;
	}
	virtual void Cobrar(){
	cout<<"Cobro como empleado(generico)"<<endl;
	}
	///////////////

};

class Jefe : public Trabajador{
private:
	int trabajadorers;
public:
	void Trabajar(){	//-----*
	cout<<"Trabajo muy relax"<<endl;
	}
	void Cobrar(){
	cout<<"Cobro como todo un patron!"<<endl;
	}
};

class EmpleadoBase: public Trabajador {
private:
	int AniosContrato;
public:
	void Trabajar(){	//-----*
		cout<<"Trabajo bajo contrato"<<endl;
	}
	void Cobrar(){
		cout<<"Cobro regular"<<endl;
	}
};

class GerentedePlanta : public Jefe{

public:
	void Trabajar(){	//-----*
		cout<<"Yo ni trabajo, LOL"<<endl;
	}
	void Cobrar(){
		cout<<"Yo cobro como Bill Gates!!, buen no (:okay:)"<<endl;
	}

};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	int opc;

	//Trabajador * Dante = new EmpleadoBase;
	//Trabajador * Oscar = new Jefe;
	//Trabajador * Esteban = new GerentedePlanta;
	Trabajador * apworker;
	Trabajador * Nomina[6];
	system("clear");

	for(int i=0; i<6; i++){

		cout<<"Que empleado quiere contratar?"<<endl<<"1.- Empleado de base"<<endl<<"2.- Jefe"<<endl
		<<"3.- Gerente de Planta"<<endl<<endl;
		cin>>opc;

		switch(opc){
			case 1:
				apworker = new EmpleadoBase;
			break;
			case 2:
				apworker = new Jefe;
			break;
			case 3:
				apworker = new GerentedePlanta;
			break;
			default:
				apworker = new Trabajador;
			break;
		}
		Nomina[i] = apworker; //Aqui el apuntador se almacena en el arreglo de apuntadores
		
	}

	for(int i=0; i<6; i++){
		Nomina[i] -> Trabajar(); //-->1
		Nomina[i] -> Cobrar();
	}

	return 0;
}
///////////////////
/*--->Metodos<---*/

//Metodos de trabajador



//Metodos de Jefe


//Metodos de Empleado de Base

//Metodos de Gerente de Planta

/*--->Funciones<---*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////