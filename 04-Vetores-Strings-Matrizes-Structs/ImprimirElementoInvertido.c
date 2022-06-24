/* Escreva um programa que leia um vetor com 30 elementos inteiros e escreva-os
em ordem contrária à da leitura. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	int vetorA[30];
	int i;
	
	for (i = 0; i < 30; i++){
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
		fflush(stdin);
	}
	for (i = 29; i >= 0; i--){
		printf("\n %d", vetorA[i]);
	}
	return (0);
}
