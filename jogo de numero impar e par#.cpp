#include<iostream>
using namespace std;

//Jogo classico (impar ou par)

int main(){
//VARIAVEIS
int par[10], impar[10], resul, cont, venceuA=0, venceuB=0,rod=1;

//INICIO
cout << "JOGADOR A = PAR" << "\n";
cout << "JOGADOR B = IMPAR" << "\n\n";
for(cont=0; cont<=9; cont++){
	cout << rod++ << " Rodada:\n";
	cout << "Jogador A escolha um numero: ";
	cin >> par[cont];
	cout << "\n\n" << "Jogador B escolha um numero: ";
	cin >> impar[cont]; 
	resul=par[cont]+impar[cont];
if(resul%2==0){
	cout << "\nVenceu o jogador A\n\n";
	venceuA++;
}else{
	cout <<"\nVenceu o jogador B\n\n";
	venceuB++;	
}
}
cout << "Jogador A venceu: " << venceuA << " vezes\n";
cout << "Jogador B venceu: " << venceuB << " vezes";

return 0;
}
