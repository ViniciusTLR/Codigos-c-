#include<stdio.h>

//informa qual o maior numero

int main(){

//VARIAVEIS

int vet[5], i, maiornum=0;

//INICIO

printf("Digite 5 numeros: \n");

for(i=0;i<5;i++){
	scanf("%d",&vet[i]);
	
	if(vet[i]>maiornum){
		maiornum=vet[i];
	}
}
printf("O maior numero e: %d",maiornum);


return 0;	
}
