#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ 

	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	if (numero > 0) {
		printf("Esse número é positivo.");		
	} else if (numero < 0) {
		printf("Esse número é negativo.");
	} else {
		printf("Esse número não é positivo e nem negativo.");
	}
}
