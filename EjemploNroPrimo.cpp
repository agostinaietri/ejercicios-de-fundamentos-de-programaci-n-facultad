#include <iostream>
#include <cmath>
using namespace std;
/// Ingresar un n�mero por teclado e informar si es primo
bool EsNroPrimo(int nro);
int main() {
	int valor;
	cout<<"Ingrese valor (0 termina)"<<endl;
	cin>>valor;
	while (valor != 0){
		
		/// llamado a la funci�n
		bool primo = EsNroPrimo(valor);
		
		if (primo==true){
			cout<<valor<<" es un n�mero primo"<<endl;}
		else {
			cout<<valor<<" no es n�mero primo"<<endl;
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
			return false; /// encontr� un divisor
		}
	}
	/// recorri� todos los divisores posibles
	return true; 
}
