#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char nome[80];
	int tamanho;
	
	printf("Digite o seu nome completo: ");
	gets(nome);
	tamanho = strlen(nome);
	
	printf("O comprimento do nome é: %d", tamanho);
	
	return (0);	
}
