#include<stdio.h>

//Uma matriz 5x5 que armazena o produto dos seus índices

int main(){
	
//VARIAVEIS

int matriz[5][5], i=0, j=0;

//INICIO

for(j=0;j<5;j++){
	for(i=0;i<5;i++){
	
	matriz[i][j]=i*j;
	printf(" | %d", matriz[i][j]);
	
}
printf("\n");

}

return 0;
}
