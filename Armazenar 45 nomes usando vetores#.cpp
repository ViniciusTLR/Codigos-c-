#include<iostream>
using namespace std;

//Programa guarda 45 nomes dentro do vetor nomes

int main(){
//VARIAVEIS
string nomes[45];
int i;	
	
//INICIO	
for(i=0; i <= 44; i++){
	cout << "digite o " << i+1 << " nome: ";
	cin >> nomes[i];
}	

	return 0;
}
