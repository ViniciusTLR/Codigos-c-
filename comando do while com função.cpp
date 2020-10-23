#include<stdio.h>

//uma função que, enquanto o usuário não digitar zero ela não para de pedir um número novo.

int repetir(int n){
	int resul;
	do{	
	scanf("%d",&n);
	}while(n!=0);
	return resul;
}

int main(){
int n,retorno;
printf("Digite quantos numeros quiser, para finalizar aperte 0\n");

retorno=repetir(n);

return 0;	
}
