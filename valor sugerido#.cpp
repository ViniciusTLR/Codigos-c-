#include <iostream>
#include <locale>

using namespace std;

//Calcula o valor do produto e mais 20% para sugerir para a pessoa que quer comprar

int main(){
	setlocale(LC_ALL, "ptb");
	
	//VARIAVEIS
	double produto, valor, sug;
	
	//Inicio
	cout << "Quanto custa o produto? ";
	cin >> produto;
	valor=produto*20/100;
	sug=valor+produto;
	cout << "\n\nvalor sugerido é de " << sug;
	
}
