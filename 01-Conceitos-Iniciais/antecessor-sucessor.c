/* Escreva um programa que leia um número inteiro e apresente seu 
antecessor e seu sucessor */

#include <stdio.h>

int main(){
	int num, ant, suc;
	
	printf("Digite o numero: ");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("\nNumero antecessor: %d", ant);
	printf("\nNumero sucessor: %d", suc);
	
	return (0);
}