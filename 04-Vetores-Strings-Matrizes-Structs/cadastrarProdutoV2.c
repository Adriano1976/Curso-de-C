#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
	
	int codigo;
	char descricao[50];
	float preco;
	int quantidade;	
	float total;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	struct produto ficha[2];	
	int num, i;	
	
	for (i = 0; i < 2; i++){
		printf("\n\n----- FICHA DE CADASTRO DE PRODUTO -----\n\n");
		printf("Digite o código do produto: ");
		scanf("%d", &ficha[i].codigo);
		fflush(stdin);
		printf("Digite a descrição do produto: ");
		scanf("%s", &ficha[i].descricao);
		fflush(stdin);
		printf("Digite o preço do produto: ");
		scanf("%f", &ficha[i].preco);
		fflush(stdin);
		printf("Digite a quantidade do produto: ");
		scanf("%d", &ficha[i].quantidade);
		fflush(stdin);
		ficha[i].total = ficha[i].preco * ficha[i].quantidade;
	
		system("cls");
	}
	
	printf("\n- LISTA DE CADASTRO DE PRODUTO -\n");
	for (i = 0; i < 2; i++){
		printf("\n\n------- PRODUTO %d --------------\n\n", i + 1);
		printf("\tCódigo: %d\n", ficha[i].codigo);
		printf("\tDescrição: %s\n", ficha[i].descricao);
		printf("\tPreço: R$ %.2f\n", ficha[i].preco);
		printf("\tQuantidade: %d\n", ficha[i].quantidade);
		printf("\tTotal: R$ %.2f", ficha[i].total);		
	}
	printf("\n");	
	
	return (0);	
}
