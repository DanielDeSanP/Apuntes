#include<iostream>
/*
Notas:
Recordemos los operadores:
+,-,*,/
tambien los de aumento:
+=,-=,*=,/=,
los de aumento de una unidad
++,--
1.-
Con este metodo se sobrecarga un operdador, lo cual permite que se hagan operaciones entre objetos, 
para ello se tiene que definir que se va a sumar de los objetos, para ello hay que seguir la plantilla
donde se establece un metodo que devuelve un objeto, y que recibe un objeto mas una referencia (& rhf)
Tambien se puede sobrecargar <<
*/

/*--->Nombres espacio y clases<---*/

using namespace std;

class Cuenta{
private:
	//string cliente;
	int suSaldo;
	int suDeuda;
public:

	Cuenta(){

	}
	Cuenta(int saldo, int deuda):suSaldo(saldo),suDeuda(deuda){

	}
	~Cuenta(){

	};
	int consutarSaldo(){
		return suSaldo;
	}
	int consutarDeuda(){
		return suDeuda;
	}
	Cuenta operator + (Cuenta & rhs){ //--->1
		Cuenta temp;
		temp.AsignarSaldo(suSaldo + rhs.consutarSaldo());
		temp.AsignarDeuda(suDeuda + rhs.consutarDeuda());
		return temp;

	}
	void AsignarSaldo(int nuevosaldo){
		suSaldo = nuevosaldo;
	}
	void AsignarDeuda(int nuevadeuda){
		suDeuda= nuevadeuda;
	}
	/*
	ostream& operator <<(ostream& s,Cuenta & c1){
		s<<"Este es tu saldo "<<c1.consutarSaldo()<<endl;
		s<<"Este es tu deuda "<<c1.consutarDeuda()<<endl;
	}
	*/
	/*
	//Tampoco sobrecarga
	bool operator ==(Cuenta C1, Cuenta A1){
		return(C1.suSaldo==A1.suSaldo) && (C1.suDeuda==A1.suDeuda);
	}
	*/
};

/*--->Funciones Prototipo<---*/


///////////////////

int main(){
	
	int a=7;
	int b=3;
	int c=a+b;
	Cuenta Harry(10000,3000);
	Cuenta Sally(17000,2000);
	Cuenta Mancomunada;
	system("clear");
	/*
	cout <<"El valor de a es: "<<a<<endl;
	cout <<"El valor de b es: "<<b<<endl; 
	cout <<" El valor de c es: "<<c<<endl;
	*/
	cout<<"El saldo de Harry es: "<<Harry.consutarSaldo()<<endl;
	cout<<"La deuda de Harry es: "<<Harry.consutarDeuda()<<endl;
	cout<<"El saldo de sally es: "<<Sally.consutarSaldo()<<endl;
	cout<<"La deuda de Sally es: "<<Sally.consutarDeuda()<<endl;

	cout<<"El banco ProtecoBank felicita a Harry y Sally por su reciente matrimonio"<<endl;

	Mancomunada= Harry + Sally;
	cout<<"El nuevo slado de la Cuenta Mancomunada es: "<<Mancomunada.consutarSaldo()<<endl;
	cout<<"La nueva deuda de la cuenta Mancomunada es: "<<Mancomunada.consutarDeuda()<<endl;
	
//cout<<Mancomunada;
	/*
	if(Harry==Sally){
		cout<<"Son iguales "<<endl;
	}
	*/

	return 0;
}
///////////////////
/*--->Metodos<---*/


/*--->Funciones<---*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////