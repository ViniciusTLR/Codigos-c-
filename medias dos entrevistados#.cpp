#include <iostream>

using namespace std;

//programa paraa calcula quantos foram os entrevistados e a media do peso e da idade deles

int main(){
	
	//VARIAVEIS
	int idade, entrevistados=0, totalid;
	float peso, media_idade, media_peso, totalp;
	
	//INICIO
	cout << "Digite 0 para calcular as medias dos entrevistados\n\n";
	cout << "Informe seu peso: ";
	cin >> peso; 
	totalp=peso;
	cout << "\nInforme sua idade: ";
	cin >> idade;		
	totalid=idade;
	
	while(peso!=0){
		cout << "\nInforme seu peso: ";
		cin >> peso;
		totalp+=peso;
		if(peso!=0){
			cout << "\nInforme sua idade: ";
			cin >> idade;
			totalid+=idade;
		}
	
	entrevistados++;
	
	}
	
	cout << "\nNumeros de entrevistados: " <<entrevistados;
	cout << "\n\nMedia do peso dos entrevistados: ";
	media_peso = totalp/entrevistados;
	cout << media_peso;
	cout << "\n\nMedia da idade dos entrevistados: ";
	media_idade = totalid/entrevistados;
	cout << media_idade;
	
	return 0;
}
