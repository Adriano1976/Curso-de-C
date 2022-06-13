/*
Faça um programa que leia um número inteiro e calcule o seu fatorial.
*/

#include <stdio.h>

int main(){
	
	int num, i, fat;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	fat = 1;
	for (i = 1; i <= num; i++){
		fat = fat * i;
	} 
	
	printf("Fatorial: %d", fat);
	
	return (0);
	
}
