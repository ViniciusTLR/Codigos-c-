#include<stdio.h>

//uma função que recebe quatro notas e retorne a media aritmética dessas notas

//função com retorno para calcular a media
float medianotas(float nota1, float nota2, float nota3, float nota4, float media){

media = (nota1 + nota2 + nota3 + nota4)/4;
return media;

}

float nota1, nota2, nota3, nota4, media,total;

int main(){
	
printf("Digite a primeira nota: ");
scanf("%f",&nota1);

printf("Digite a segunda nota: ");
scanf("%f",&nota2);

printf("Digite a terceira nota: ");
scanf("%f",&nota3);

printf("Digite a quarta nota: ");
scanf("%f",&nota4);

total=medianotas(nota1, nota2, nota3, nota4, media);

printf("A media das notas e: %f",total);	

return 0;	
	
}
