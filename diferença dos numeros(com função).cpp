#include<stdio.h>

//uma função que recebe dois valores (x,y) e retorne a diferença entre eles.

int diferenca(int x, int y){
int resul;
if(x>y){
      resul = x - y;
      return resul;
    }else{
       resul = x + y;
       return resul;
    }

}

int main(void){
	int x,y,retorno;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	retorno=diferenca(x,y);
	printf("A diferenca entre os numeros e: %d",retorno);
	
	return 0;
}
