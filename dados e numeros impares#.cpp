#include<iostream>
using namespace std;

//Programa ira dizer quantas vezes caiu um numero impar


int main(){
//VARIAVEIS
int dado[10], impar=0, cont=0;

//INICIO
cout << "Jogue 10 vezes o dado";

for(cont=0; cont <=9; cont++){
	cout << "\nInforme o " << cont+1 << " numero: ";
	cin >> dado[cont];
if(dado[cont]%2!=0){
	impar++;
}	
}
cout << "\n\ncairam " << impar << " numeros impares";

return 0;
}
