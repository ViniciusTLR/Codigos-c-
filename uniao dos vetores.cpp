#include<stdio.h>

//um programa que le dois vetores de 4 elementos. e um vetor que seja a união destes vetores, 
//ou seja um vetor com 8 elementos.

int main(){

//VARIAVEIS

int vet1[4],vet2[4],vet3[8], i,j,k;

//INICIO

printf("Vetor 1: \n");
for(i=0;i<4;i++){
	scanf("%d", &vet1[i]);
	vet3[k]=vet1[i];
	k++;
}
printf("Vetor 2: \n");
for(j=0;j<4;j++){
	scanf("%d", &vet2[j]);
	vet3[k]=vet2[j];
	k++;
}
printf("Vetor 3: \n");
for(k=0;k<8;k++){
printf("%d ", vet3[k]);
}


return 0;
}
