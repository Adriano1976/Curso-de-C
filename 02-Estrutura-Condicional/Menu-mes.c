/*
- Considere uma aplicação que necessita de um calendário embutido. Assim sendo,
construa um programa que, dado um número inteiro, informe o mês correspondente.
*/

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite o numero correspondente ao mes [1 - 12]: ");
	scanf("%d", &numero);
	
	switch (numero){
		case 1: printf("\n Mes de Janeiro\n");
		break;
		case 2: printf("\n Mes de Fevereiro\n");
		break;
		case 3: printf("\n Mes de Marco\n");
		break;
		case 4: printf("\n Mes de Abril\n");
		break;
		case 5: printf("\n Mes de Maio\n");
		break;
		case 6: printf("\n Mes de Junho\n");
		break;
		case 7: printf("\n Mes de Julho\n");
		break;
		case 8: printf("\n Mes de Agosto\n");
		break;
		case 9: printf("\n Mes de Setembro\n");
		break;
		case 10: printf("\n Mes de outubro\n");
		break;
		case 11: printf("\n Mes de Novembro\n");
		break;
		case 12: printf("\n Mes de Dezembro\n");
		break;
		default: printf("\n Mes invalido\n");
		break;
	}
	
	return (0);
}