/*
- Em algumas situações, em uma aplicação, é preciso determinar quais são os
números múltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados. 
Dessa forma, faça um programa que leia um número e informe se ele é divisível por três e por sete.
*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int numero;
	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	if (numero % 3 == 0){
		printf("O numero e divisivel por 3.");
	}
	if (numero % 7 == 0){
		printf("O numero e divisivel por 7");
	}
	return (0);
}