#include<stdio.h>

//uma função que recebe dois números inteiro e retorne o menor número.

int menornumero (int x,int y){
	if(x>y){
		return 1;
	}else if(x==y){
		return 0;
	}else{
		return 2;
	}
}

int main(void){
	int x,y,resul;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	resul =	menornumero(x,y);
	
	if(resul=0){
		printf("Eles sao iguais");
	}else if(resul=1){
		printf("O segundo numero e menor");
	}else{
		printf("O primeiro numero e menor");
	}
	
	
	return 0;
}
