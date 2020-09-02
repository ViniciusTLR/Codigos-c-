#include<iostream>
#include<locale>

using namespace std;

//Esse programa ira dizer quantos dias uma pessoa já viveu


int main(){
	setlocale(LC_ALL, "ptb");
	
	//VARIAVEIS
	int dias, idade, anos;
	
	//INICIO
	cout << "Quantos anos você tem? ";
	cin >> anos;
	dias= anos*365;
	cout << "\n\nVocê viveu " << dias << " dias.";
	
	return 0;
}
