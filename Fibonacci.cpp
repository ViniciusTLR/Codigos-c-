#include <iostream>
using namespace std;

int main(){
	
//VARIAVEIS
int i=0, quant, f, num1=0, num2=1;

//INICIO

cout << "Digite a quantidade de sequencias: ";
cin >> quant;

while(i<=quant){	
	f=num1+num2;
	cout << f;
	cout << " ";
	i++;
	if(i==quant){
		break;
	}
	num2=f+num1;
	cout << num2;
	cout << " ";
	i++;
	if(i==quant){
		break;
	}
	num1=f+num2;
	cout << num1;
	cout << " ";
	i++;
	if(i==quant){
		break;
	}
}
	
return 0;
}
