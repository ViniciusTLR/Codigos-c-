#include<iostream>
using namespace std;

//Programa calcula o fatorial

int main(){
//VARIAVEIS
int num, contador, fatorial=1;

//INICIO
cout << "escolha um numero fatorial: ";
cin >> num;

for(contador=1; contador <= num; contador++){
	fatorial*=contador;

}
cout << "\no fatorial desse numero e: " << fatorial;

return 0;
}
