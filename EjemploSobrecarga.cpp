#include <iostream>
using namespace std;

int dividir (int a, int b) {
	return (a/b);
}

float dividir (float a, float b) {
	return (a/b);
}

float promedio(int a, int b) {
	return (a+b)/2.0;
}
float promedio(int a, int b, int c) {
	return (a+b+c)/3.0;
}


int main() {
	int x=5,y=2;
	float n=5.0,m=2.0;
	cout << dividir (x,y) << endl;
	cout << dividir (n,m) << endl ;
	return 0;
}

