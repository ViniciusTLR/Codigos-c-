#include <iostream>

using namespace std;

//programa ira dizer qual numero entre os 15 numeros escolhidos qual é o maior

int main(){
	//VARIAVEIS
	int contador;
	float num, resul=0;
	
	//INICIO
	for(contador=1; contador<=15; contador++){
		cout << "Digite o " << contador << " numero: ";
		cin >> num;
		if(num>resul){
			resul=num;
		}
	}
		cout <<"\nO maior numero informado foi "<<resul;
	
	return 0;
}
