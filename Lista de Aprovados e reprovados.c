#include<stdio.h>

//LISTAS DE APROVADOS E REPROVADOS

int main(){
	
	int lista,i,j=0;
	float medias[5];
	
	printf("Digite as medias: \n");
	
	for(i=0;i<5;i++){
		scanf("%f",&medias[i]);
	}
	
	printf("Digite [1] para lista de aprovados ou digite [2] para lista de reprovados\n");
	scanf("%d",&lista);
	switch(lista){
		case 1:
			for(i=0;i<5;i++){
				medias[i];
				if(medias[i]>5){
					j++;	
				}	
			}
			printf("Foram aprovados %d",j); printf(" alunos");
			break;

		case 2:
			for(i=0;i<5;i++){
				medias[i];
				if(medias[i]<=5){
					j++;	
				}	
			}
			printf("Foram reprovados %d",j); printf(" alunos");
			break;			
			
	}
	
	return 0;
}
