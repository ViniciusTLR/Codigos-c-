#include<stdio.h>

//Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, 
//escreva o n�mero de alunos que n�o passou na prova 1, prova 2 e prova 3. Considere 5 como m�dia e 10 nota m�xima.


int main(){
	
//VARIAVEIS

float matriz[10][3], media, i, j;
int c=0;

//INICIO
printf("Digite as notas da primeira prova: \n");
for(i=0;i<5;i++){
	for(j=0;j<2;j++){
		
		scanf("%f", &matriz[2][5]);
		if(matriz[2][5]<5){
		c++;
		
		}
	}
}
printf("Reprovaram %d ", c); printf("alunos na prova 1\n\n");

printf("Digite as notas da segunda prova: \n");
c=0;
for(i=0;i<5;i++){
	for(j=0;j<2;j++){
		scanf("%f", &matriz[2][5]);
		if(matriz[2][5]<5){
		c++;
		
		}
	}
}
printf("Reprovaram %d ", c); printf("alunos na prova 2\n\n");

printf("Digite as notas da terceira prova: \n");
c=0;
for(i=0;i<5;i++){
	for(j=0;j<2;j++){
		
		scanf("%f", &matriz[2][5]);
		if(matriz[2][5]<5){
		c++;
		
		}
	}
}

printf("Reprovaram %d ", c); printf("alunos na prova 3\n");

return 0;	
}
