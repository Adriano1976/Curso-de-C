#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 

	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero > 0) {
		printf("Esse n�mero � positivo.");		
	} else if (numero < 0) {
		printf("Esse n�mero � negativo.");
	} else {
		printf("Esse n�mero n�o � positivo e nem negativo.");
	}
}
