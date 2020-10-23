#include<stdio.h>

//uma função que recebe um valor inteiro e verifica se o valor é par.

int numpar(int num){
	int resul;
	
	num=num%2;
	if(num==0){
		printf("\nE um numero par");
		return resul;
	}else{
		printf("\nNao e um numero par");
		return resul;
	}
}

int num, retorno;

int main(){
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	retorno=numpar(num);	
	
	return 0;
}
