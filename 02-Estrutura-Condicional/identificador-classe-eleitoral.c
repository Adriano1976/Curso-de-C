/*
- Construa um programa que receba a idade de uma pessoa e identifique sua classe
eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e
65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	system ("chcp 1252");
    
	int idade;
	
	printf("Informe sua idade até: ");
	scanf("%d", &idade);
	
	if (idade < 16){	
		printf("\nNão eleitor");
	}else{      
		if ((idade < 18) || (idade > 65)){
			printf("\nEleitor facultativo");
		}else{      
			printf("\nEleitor obrigatório");
		}
	}
	
	return 0;
}