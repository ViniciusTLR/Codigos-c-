#include<iostream>

using namespace std;

//Programa calcula a area do retangulo

int main(){
	//VARIAVEIS
	double lado1;
	double lado2;
	double area;
	
	//INICIO
	cout << "***qual a medida do terreno*** \n\n";
	cout << "qual a largura? "; cin >> lado1; cout << "qual o comprimento?  "; cin >> lado2;
	cout << lado1 << " X " << lado2;
	area = lado1*lado2;
	cout << ", entao a area do retangulo e igual a ";
	cout << area;
	
	return 0;
}
