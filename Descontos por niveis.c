#include<stdio.h>
#include<ctype.h>

//descontos diferentes para niveis de cliente

int main(){
	
	int nivel;
	float valor,desconto,total;
	
	printf("Qual o valor do produto?\n");
	scanf("%f",&valor);
	
	
	printf("\nDigite o nivel do cliente para calcular o desconto. \n");
	printf("Digite [1] para o nivel A, digite [2] para o nivel B ou digite [3] para o nivel C.\n");
	scanf("%d",&nivel);
	
	//nivel = toupper(nivel); serve para o A(maiusculo) e a(minusculo) serem iguais. FUNCIONA SÓ COM A BLIBLIOTECA #include<ctype.h>
	
	switch(nivel){
		case 1:
			desconto=valor*20/100;
			printf("***Cliente nivel A***");
			printf("\nDesconto de %.2f",desconto); printf(" reais");
			total=valor-desconto;
			printf("\nO total a pagar e de %.2f",total); printf(" reais");
			break;
		
		case 2:
			desconto=valor*15/100;
			printf("***Cliente nivel B***");
			printf("\nDesconto de %.2f",desconto); printf(" reais");
			total=valor-desconto;
			printf("\nO total a pagar e de %.2f",total); printf(" reais");
			break;
				
		case 3:
			desconto=valor*10/100;
			printf("\n***Cliente nivel C***");
			printf("\nDesconto de %.2f",desconto); printf(" reais");
			total=valor-desconto;
			printf("\nO total a pagar e de %.2f",total); printf(" reais");
			break;				
			
			default:
				printf("####ERRO####");			
	}
	
	return 0;
}
