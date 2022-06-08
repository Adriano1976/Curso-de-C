/*
- É comum, em uma aplicação, ter de determinar quais números são o maior ou o
menor, dentre todos os valores de um conjunto de dados. Assim sendo, escreva
um programa que receba cinco números inteiros e apresente o maior e o menor.
*/

#include <stdio.h>

int main(){
	
	int num;
	int maior, menor, i;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num);
	maior = num;
	menor = num;
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num);
	if (num > maior) maior = num;
	if (num < menor) menor = num;
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &num);
	if (num > maior) maior = num;
	if (num < menor) menor = num;
	
	printf("Digite o quarto numero: ");
	scanf("%d", &num);
	if (num > maior) maior = num;
	if (num < menor) menor = num;
	
	printf("Digite o quinto numero: ");
	scanf("%d", &num);
	if (num > maior) maior = num;
	if (num < menor) menor = num;
	
	printf("\nO maior numero: %d\n", maior);
	printf("O menor numero: %d\n", menor);
	
	return (0);	
	
}
