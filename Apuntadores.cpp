#include<iostream>


/*
	Tipos de retorno:

	Retorno 0 : El programa se ejecutó correctamente 
	Retorno 1 : Error al introducir un formato de dato incorrecto
	Retorno 2 : Error al introducir un valor no valido 
	Retorno (Otro Numero) : Error logico

*/



//Area de espacios nombre

using namespace std;


//Area de funciones prototipo y varaibles globales



//Funcion Principal



int main(){  // La funcion de main no esta definida en el iostream, es una directiva que define el incio del programa
	//Area de variables
	int x=10;
	float y=12.34;
	char z=64;
	/*
		Apuntador :
		
		Un apuntador es un tipo de variable que guarda la direccion de una variable, al momento de 
		declararla se necesita especificar que tipo de variable va a apuntar.

		& ----->  Indica direccion de memoria de una variable ----> Operador de direccion
		* -----> Muestra el contenido de la variable que esta apuntando el apuntador ------> Operdador de indireccion

	*/
		system("clear");
		cout<<"Entero : "<<x<<endl;
		cout<<"Flotante : "<<y<<endl;
		cout<<"Char Dante"<<z<<"proteco.mx"<<endl;
	int *apint;
		cout<<"La direccion de Entero x es : "<<&x<<endl;
		apint=&x;
		cout<<"El valor de x con apuntador = "<<*apint<<endl;
		cout<<"El valor del apuntador = "<<apint<<endl;
		cout<<"La direccion del apuntador = "<<&apint<<endl;
		cout<<"Apuntador"<<endl;
		*apint+=*apint; //Se realiza la operacion, y el nuevo valor se almacena en la variable origen.
		cout<<"Ahora el valor de x es : "<<x<<endl;
	float *apFloat=&y;
	char *apChar=&z;
		
		cout<<"Antes de cambiar "<<y<<endl;
		*apFloat=32.05,
		cout<<"Despues de cambiar "<<y<<endl;
		
		cout<<"Antes de cambiar "<<z<<endl;
		*apChar='h';
		cout<<"Despues de cambiar "<<z<<endl;






	return 0;
}


//OTRAS FUNCIONES