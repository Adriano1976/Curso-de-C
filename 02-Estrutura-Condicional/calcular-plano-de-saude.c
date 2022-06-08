/* 
- Elabore um programa que receba o nome e a idade de uma pessoa e informe
o nome, a idade e o valor da mensalidade do plano de saúde: 
Até 18 anos --> R$ 50,00
De 19 a 29 anos --> R$ 70,00
De 30 a 45 anos --> R$ 90,00
De 46 a 65 anos --> R$ 130,00
Acima de 65 anos --> R$ 170,00
*/

#include <stdio.h>

int main(){
	char nome[30];
	int idade;
	
	printf("Informe o nome: ");
	scanf("%s", nome);
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	
	if (idade <= 18){
		printf("\nValor do plano: R$ 50,00");  
	}
	else {
		if ((idade >= 19) && (idade <= 29)){
		   	printf("\nValor do plano: R$ 70,00");
		}
		else{
  		    if((idade >= 30) && (idade <= 45)){
  				printf("\nValor do plano: R$ 90,00");	  
		    }
	     	else{
	 			if ((idade >= 46) && (idade <= 65)){
	    		 	printf("\nValor do plano: R$ 130,00");
				}
				else{
				  	printf("\nValor do plano: R$ 170,00");	
				}
  			}
		}
	}
	return (0);
}