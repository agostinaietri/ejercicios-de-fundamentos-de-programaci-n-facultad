#include <iostream>
using namespace std;
/// Codificar una funciín que permita ingresar una edad
/// entre 12 y 90 años, en caso de ingresar un valor fuera 
/// de rango, deben dar un mensaje y permitir el reingreso
/// del dato
int LeerEdad(int valorini,int valortope);
int LeerDato(int valorini,int valortope,string mensaje,string mensaje_error);
int main() {
	///int edad = LeerEdad(16,80);
	
	///cout<<endl<<endl;
	///cout<<"La edad leida es "<<edad<<endl;
	
	
	int categoria = LeerDato(1,8,"Ingrese Categoría ","Dato fuera de rango, no sea bobo");
	cout<<endl<<endl;
	cout<<"La categoria leida es "<<categoria<<endl;
	
	return 0;
}
int LeerEdad(int valorini,int valortope){
	bool terminado=false;
	int edad;
	
	while (terminado == false){
		cout<<"Ingrese edad de la persona ("<<valorini<<" a "<<valortope<<")"<<endl;
		cin>> edad;
		if ((edad < valorini) || (edad > valortope)){
			cout<<"Edad fuera de rango, debe reingresarla"<<endl;}
		else{
			terminado=true; /// la ingresó bien
		}
	}
	return edad;  ///retorno la edad leida
	
}
int LeerDato(int valorini,int valortope,string mensaje,string mensaje_error){
	bool terminado=false;
	int dato;
	while (terminado == false){
		cout<<mensaje<<"  valores posibles("<<valorini<<" - "<<valortope<<")"<<endl;
		cin>> dato;
		if ((dato < valorini) || (dato > valortope)){
			cout<<mensaje_error<<endl;}
		else{
			terminado=true; /// la ingresó bien
		}
	}
	return dato;  ///retorno la edad leida
}
