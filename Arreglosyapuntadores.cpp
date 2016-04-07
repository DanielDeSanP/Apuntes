#include<iostream>


/*Tipos de retorno:

Retorno 0 : El programa se ejecutó correctamente 
Retorno 1 : Error al introducir un formato de dato incorrecto
Retorno 2 : Error al introducir un valor no valido 

*/



//Area de espacios nombre

using namespace std;


//Area de funciones prototipo y varaibles globales



//Funcion Principal
int main(){
	//Area de variables
	char a[]={"ola ke ase"};  //Un Arreglo es un apuntador conceptualemente
	int b[]={10,11,12,13,14,15};
	int *apuntadorentero=b;
	char *apuntador=a;	//Por ello no se necesita usar & para indicar la direccion de memoriua
	
	cout<<a[0]<<endl;
	cout<<*apuntador<<endl;//EL apuntador apunta al primer espacio del arreglo

	cout<<a[5]<<endl;
	cout<<*(apuntador+5)<<endl; //A la direccion de memoria se le suma 5 a su direccion guardad, entonces se imprime la e
	*apuntador=a[5];
	cout<<*apuntador<<endl;
	
		for(int i=0; i<8;i++){
			cout<<*(apuntadorentero+i)<<endl;
		}
	


	return 0;
}