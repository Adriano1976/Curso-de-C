#include <stdio.h>

/*
- O problema consiste em ler um conjunto de números inteiros e contar a
quantidade de números pares e ímpares. A leitura deve ser realizada até
que seja lido o valor zero.
*/

int main(){
	int par, impar, num;
	par = 0;
	impar = 0;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	
	while (num != 0){
		if (num % 2 == 0) 
			par++;
		else
			impar++;
			
		printf("Informe o numero: ");
		scanf("%d", &num);
	}	
	
	printf("Quantidade de par: %d\n", par);
	printf("Quantidade de impar: %d\n", impar);
	return (0);
}
