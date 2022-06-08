/* Escreva um programa que leia um número inteiro e apresente seu 
antecessor e seu sucessor */

#include <stdio.h>

int main(){
	
	int ant, suc, num;
	
	printf("Digite um valor: ");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	                
	printf("\nValor antecessor: %d", ant);
	printf("\nValor sucessor: %d", suc);
	
	return (0);
}