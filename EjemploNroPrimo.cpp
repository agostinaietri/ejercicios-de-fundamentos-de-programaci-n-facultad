#include <iostream>
#include <cmath>
using namespace std;
/// Ingresar un número por teclado e informar si es primo
bool EsNroPrimo(int nro);
int main() {
	int valor;
	cout<<"Ingrese valor (0 termina)"<<endl;
	cin>>valor;
	while (valor != 0){
		
		/// llamado a la función
		bool primo = EsNroPrimo(valor);
		
		if (primo==true){
			cout<<valor<<" es un número primo"<<endl;}
		else {
			cout<<valor<<" no es número primo"<<endl;
		}
	    cout<<"Ingrese valor (0 termina)"<<endl;
	    cin>>valor;
	}
	return 0;
}

bool EsNroPrimo(int nro){
	int Tope = sqrt(nro); /// Raiz cuadrada
	for (int i = 2;i<=Tope;i++){
		if (nro % i == 0){
			return false; /// encontró un divisor
		}
	}
	/// recorrió todos los divisores posibles
	return true; 
}
