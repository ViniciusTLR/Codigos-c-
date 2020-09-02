#include<iostream>

using namespace std;

//programa para definir em que categoria a pessoa esta ( usando o comando if)


int main(){
	
	//VARIAVEIS
	int idade;
	
	//INICIO
	cout << "**** BEM VINDO AO JOCKEY CLUB ****\n\n";
	cout << "informe sua idade para saber em que categoria voce ira participar: ";
	cin >> idade;
	cout << "\n";
	
	if(idade>= 7 && idade <=12){
		cout << "voce esta na categoria INFANTIL";
	}else if(idade>12 && idade <=17){
		cout << "voce esta na categoria JUVENIL";
	}else if(idade>=18 && idade<=49){
		cout << "voce esta na categoria ADULTO";
	}else if(idade >=50 && idade<80){
		cout << "voce esta na categoria SENIOR";
	}else{
		cout << "voce nao pode participar";
	}
	
	return 0;
}
