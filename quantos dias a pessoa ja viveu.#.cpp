#include<iostream>
#include<locale>

using namespace std;

//Esse programa ira dizer quantos dias uma pessoa j� viveu


int main(){
	setlocale(LC_ALL, "ptb");
	
	//VARIAVEIS
	int dias, idade, anos;
	
	//INICIO
	cout << "Quantos anos voc� tem? ";
	cin >> anos;
	dias= anos*365;
	cout << "\n\nVoc� viveu " << dias << " dias.";
	
	return 0;
}
