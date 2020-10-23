#include<stdio.h>

//uma função que recebe um valor inteiro e positivo e calcula o seu fatorial.

int fatorial(int n, int i){
	int resul;
	
	for(i=1; n>1; n=n-1){
		i=i*n;
	}
	return i;
}

int main(){
	int n, i, retorno;
	
	printf("Digite o numero pra descobrir o fatorial dele: ");
	scanf("%d",&n);
	
	retorno=fatorial(n,i);
	
	printf("o fatorial e: %d",retorno);
	
	return 0;
}
