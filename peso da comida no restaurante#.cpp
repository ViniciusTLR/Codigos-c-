#include<iostream>

using namespace std;

//Programa diz o preço do prato de acordo com o preço do quilo e do peso do seu prato

int main(){

//VARIAVEIS
float preco;
float peso;
double valor;

//INICIO	
cout << "qual o preco do quilo da comida? \n\n";
cin >> preco; cout << "\n\n";
cout << "qual o peso do prato? \n\n";
cin >> peso;
valor = preco*peso/1000;
cout << "seu prato custa " << valor << " reais";
	
	
	
	
	return 0;
}
