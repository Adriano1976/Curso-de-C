/*
- Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário, 
que deve informar o prato típico e a bebida. A tabela de calorias encontra-se a seguir:
# Italiano 750 cal -----> Chá 30 cal
# Japones 324 cal ------> Suco de laranja 80 cal
# Salvadorenho 545 cal -> Refrigerante 90 cal
*/

#include <stdio.h>
int main(){
	
	int opcao;
	float total;
	
	total = 0;
	printf("\n 1 -- Italiano \n 2 -- Japones \n 3 -- Salvadorenho \n");
	printf("Prato desejado: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1: total = total + 750;
		break;
		case 2: total = total + 324;
		break;
		case 3: total = total + 545;
		break;			
	}
	
	printf("\n 1 -- Cha \n 2 -- Suco de laranja \n 3 -- Refrigerante \n ");
	printf("Bebida desejada: ");
	scanf("%d" ,&opcao);
	
	switch (opcao){
		case 1: total = total + 30;
		break;
		case 2: total = total + 80;
		break;	
		case 3: total = total + 90;
		break;	
	}
	
	printf ("\nTotal de calorias: %.2f \n", total);
	return 0;
}