#include <iostream>
using namespace std;
/// Ingrese 3 valores numéricos, codificar una función que
/// calcule el promedio de esos valores

/// Cabeceras de las funciones
float calcularpromedio(int x,int y,int z);
void intercambio(int &x,int &y);
int main() {
	
	int a,b,c;
	cout<<"ingrese a"<<endl;
	cin>>a;
	cout<<"ingrese b"<<endl;
	cin>>b;	
	cout<<"ingrese c"<<endl;
	cin>>c;
	
	/// la variable prom captura lo que retorna la función
	float prom = calcularpromedio(a,b,c);
	cout<<"El promedio es "<<prom<<endl;
	
	cout<<endl<<endl;
	intercambio(a,b);
	cout<<"Valor de a "<<a<<" valor de b "<<b<<endl;
	
	return 0;
}

float calcularpromedio(int x,int y,int z){
	float promedio = (x+y+z) / 3.0;
	return promedio;
}

void intercambio(int &x,int &y){
	int aux = x;
	x = y;
	y = aux;
}
