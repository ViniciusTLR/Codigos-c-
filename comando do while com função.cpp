#include<stdio.h>

//uma fun��o que, enquanto o usu�rio n�o digitar zero ela n�o para de pedir um n�mero novo.

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
