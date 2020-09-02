#include <iostream>
#include <locale>

using namespace std;

//Programa calcula o quadrado e o cubo do numero digitado

int main(){
	setlocale(LC_ALL, "ptb");
	
	//VARIAVEIS
	int num;
	int q;
	int c;
	
	//INICIO
	cout << "Digite um número para saber o quadrado e o cubo dele.\n";
	cin >>num;	
	q=num*num;
	c=num*num*num;
	cout << "\n\nO quadrado de " << num << " é =  "<< q;
	cout << "\n\nO cubo de "  << num << " é = " << c;
	
	return 0;
}
