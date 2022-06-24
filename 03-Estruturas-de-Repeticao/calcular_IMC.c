#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, IMC;
	
	printf("Insira a sua altura:\n");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("Insira o seu peso:\n");
	scanf("%f", &peso);
	fflush(stdin);
	
	IMC = peso / (altura * altura);
	
	printf("Seu IMC é: %.2f.\n");
}