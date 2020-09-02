#include<iostream>

using namespace std;

//Programa diz qual nome do mes corresponde o numero digitado

int main(){
	
	//VARIAVEIS
	int num_mes;
	string nome_mes;
	bool invalido=false;
	
	//INICIO
	
	cout << "Digite um numero de 1 a 12: ";
	cin >> num_mes;
	cout << "\n";
	switch(num_mes){
		case 1:
			nome_mes = "Janeiro";
			break;
		case 2:
			nome_mes = "Fevereiro";
			break;
		case 3:
			nome_mes = "Março";
			break;
		case 4:
			nome_mes = "Abril";
			break;
		case 5:
			nome_mes = "Maio";
			break;
		case 6:
			nome_mes = "Junho";
			break;
		case 7:
			nome_mes = "Julho";
			break;
		case 8:
			nome_mes = "Agosto";
			break;
		case 9:
			nome_mes = "setembro";
			break;
		case 10:
			nome_mes = "Outubro";
			break;
		case 11:
			nome_mes = "Novembro";
			break;
		case 12:
			nome_mes = "Dezembro";
			break;	
		default:
			cout << "mes invalido";	
			invalido=true;			
		}
		if(!invalido){
			cout << "O numero " << num_mes << " equivale ao mes de " << nome_mes;
		}
		
}
