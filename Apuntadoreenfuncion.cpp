#include<iostream>

using namespace std;

int funcion(int *apuntador);

int main(){
	int a;
	int b[3];
	int c[2][2];
	int *apuntador = &a;
	funcion(apuntador);

	for(int i=0; i<3;i++){
		apuntador= &b[i];
		cout<<apuntador<<endl;
	}
	cout<<endl<<endl<<endl;
	for(int i=0; i<2;i++){
		for(int j=0; j<2; j++){
			apuntador = &c[i][j];
			cout<<apuntador<<endl;
		}
	}

	return 0;
}

int funcion(int *apuntador){
	int b;
	b= *apuntador +2;
	return b;
}