#include<iostream>

/*--->Nombres espacio y clases<---*/

using namespace std;
class Tablero{
public:
	int casillas;
	int estado;

	int actualizar(	int (*condicion)(char) );
	int posicionActual();

};

/*--->Funciones Prototipo<---*/
int turnoA();
int turnoB();
int dados(char turno);
char ganar(int x);
///////////////////

int main(){
	int ctrl = 0;
	char letra;
	int (*apFuncion)(); //Cualquier funcion que siga con las caracteristicas el papuntador a puntara a esa funcion
						//las caracterisitcas serian: retorno int y no recibe nada ()
	char (*apFuncionChar)(int);
	
	apFuncion=turnoA;
	apFuncionChar=ganar;
	Tablero juegoGato;
	

	int (*lanzarDados)(char) = dados; //Este apuntador ahora apunta a la funcion dados
	
	juegoGato.actualizar(lanzarDados); //El apuntador previamente asignado ahora entra a un metodo de la clase 

	while(1){
		apFuncion();
		apFuncionChar(100);
		if(ctrl==0){
			apFuncion = turnoB;
			ctrl=1;

		}
		else{

			apFuncion = turnoA;
			ctrl=0;

		}
		getchar();

	}
	

	return 0;
}


///////////////////
/*--->Metodos<---*/
int Tablero::actualizar(int (*condicion)(char)){
	int casillasAvanzadas = condicion('A');
	cout<<"El jugador avanzo "<<casillasAvanzadas<<endl;

	return 0;
}


/*--->Funciones<---*/
int turnoA(){
	cout<<"Turno del jugador A"<<endl;
	return 0;
}
int turnoB(){
	cout<<"Turno del jugador B"<<endl;
return 0;
}
char ganar(int x){
	cout<<"Has ganado una puntuacion de  "<<x<<" puntos"<<endl;
	return 0;
}
int dados(char turno){
	cout << "El jugador "<< turno << " lanza el dado" <<endl;
	return 6;
}	
