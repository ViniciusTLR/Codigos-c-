#include <iostream>

using namespace std;

//Programa diz quantos multiplos de 3 foram digitados

int main(){
	//VARIAVEIS
	int contador=0, num, resul;

	//INICIO
	for(contador=1; contador<=10; contador++){
		cout << "Digite o " << contador << " numero: ";
		cin >> num;
		
		if(num%3==0){
			resul++;
		}
	}
	
	cout << "A exatamente " << resul << " multiplos de 3 ";

return 0;

}
