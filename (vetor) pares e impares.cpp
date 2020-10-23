#include<stdio.h>

//diz os numeros pares e impares com vetores

int main(){

//VARIAVEIS

int vet[10], i, par, impar;

//INICIO

printf("Digite 10 valores: \n");

for(i=0;i<10;i++){
scanf("%d", &vet[i]);
}
printf("\nOs pares sao:\n");

for(i=0;i<10;i++){
	par=vet[i]%2;
	if(par==0){
		printf(" %d", vet[i]);
	}
}

printf("\nOs impares sao:\n");

for(i=0;i<10;i++){
	par=vet[i]%2;
	if(par!=0){
		printf(" %d", vet[i]);
	}
}

return 0;	
}
