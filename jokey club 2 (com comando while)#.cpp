#include<iostream>

using namespace std;

//Programa para definir em que categora a pessoa esta (usando o comando while)


int main(){
	//VARIAVEIS
	int idade=0;

	//INICIO

	while(idade != -1){
		
		cout << "Informe sua idade: ";
	cin >> idade;
		if(idade >=7 && idade<=12){
				cout << "Voce esta na categoria infantil\n\n";
			}else if(idade>=13 && idade<=17){
				cout << "Voce esta na categoria juvenil\n\n";
			}else if(idade>=18 && idade <=49){
				cout << "Voce esta na categoria adulto\n\n";
			}else if(idade >=50){
				cout << "Voce esta na categoria senior\n\n";
			}else if(idade!= -1){
				cout << "Voce esta fora da faixa etaria permitida\n\n";
			}
		}
		
	return 0;
}
