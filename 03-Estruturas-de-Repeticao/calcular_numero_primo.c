/* Construa um programa que receba um número inteiro maior que um e
verifique se ele é primo. */

#include <stdio.h>

int main(){
	
	int num, i, qtdade;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	qtdade = 0;
	for (i = 1; i <= num; i++){
		if (num % i == 0) 
			qtdade ++;
		}
		
	if (qtdade == 2) 
		printf("O numero e primo.");
	else 
		printf("Nao e primo.");
		
	return (0);	
	
}