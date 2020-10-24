#include<stdio.h>

//constroi uma matriz 3x4

int main(){

//VARIAVEIS

int matriz[3][4], i, j;

//INICIO

printf("Digite 12 valores para uma matriz[3][4]\n\n");

for(i=0;i<3;i++){
	for(j=0;j<4;j++){
	scanf("%d",&matriz[i][j]);
}
}
	printf("\n");
	
	printf("%d",matriz[0][0]);
	printf(" | %d",matriz[0][1]);
	printf(" | %d",matriz[0][2]);
	printf(" | %d",matriz[0][3]);
	printf("\n");
	printf("%d",matriz[1][0]);
	printf(" | %d",matriz[1][1]);
	printf(" | %d",matriz[1][2]);
	printf(" | %d",matriz[1][3]);
	printf("\n");
	printf("%d",matriz[2][0]);
	printf(" | %d",matriz[2][1]);
	printf(" | %d",matriz[2][2]);
	printf(" | %d",matriz[2][3]);


return 0;
}
