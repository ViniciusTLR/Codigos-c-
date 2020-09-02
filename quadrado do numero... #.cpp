#include<iostream>
#include<locale>

using namespace std;

//Programa diz o quadrado do numero digitado e diz se o quadrado do numero é maior que 25

int main(){
	setlocale(LC_ALL, "ptb");
	
	//VARIAVEIS
	int num,qua;
	
	//INICIO
	cout << "Dígite um número: ";
	cin >> num;
	cout << "\n\n" << num;
	qua=num*num;
	cout << ", O quadrado de " << num << " é = " << qua;
	if(qua > 25){
		cout << " \n\no quadrado de " << num << " é maior do que 25";
	}else{
			cout << "\n\no quadrado de " << num << " nao é maior do que 25";
		}
	
	
}
