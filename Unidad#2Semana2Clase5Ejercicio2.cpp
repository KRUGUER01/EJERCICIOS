#include <iostream>
using namespace std;

long potenciaDe(int base, int exponente);

int main(){
	int base, exponente;
	long resultado;
	cout<<"ingresa la base: "; cin>>base;
	cout<<"ingres el exponente: "; cin>>exponente;
	resultado = potenciaDe(base, exponente);
	return 0;
	}
	
	long potenciaDe(int base, int exponente){
		if(exponente !=1){
		return base * potenciaDe(base, exponente -1);
		}else{
			return base;
		}
	}
