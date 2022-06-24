#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int vetorA[10];
	int i;
	
	for (i = 0; i < 10; i++){
		printf("Digite o elemento do vetor: ");	
		scanf("%d", &vetorA[i]);
		fflush(stdin);
	}
	
	printf ("Vetor preenchido\n");
	for (i = 0; i < 10; i++){
		printf("O elemento da posição é: ");
		printf("%d -> %d", i, vetorA[i]);
	}
	
	return(0);
}
