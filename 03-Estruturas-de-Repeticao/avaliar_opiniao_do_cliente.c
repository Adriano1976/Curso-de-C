/* Em uma avaliação de um produto, o cliente responde sua opinião (1 – satisfatório; 2 –
indiferente; 3 – insatisfatório). Faça um programa que leia idade e opinião e apresente:
o número de clientes que responderam satisfatório, a média de idade dos clientes que
opinaram como satisfatório, e o número de clientes que responderam insatisfatório.
O programa se encerra quando for digitado o valor zero para idade. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, numPessoas, numPessoasSat, opiniao, numPessoasInsat;
	float somaIdade, media;
	
	numPessoas = 0;
	numPessoasSat = 0;
	numPessoasInsat = 0;
	somaIdade = 0.0;
	media = 0.0;
	
	printf("");
	printf("|------ PESQUISA DE SATISFACAO ------|");
	printf("\n\nInforme sua idade: ");
	scanf("%d", &idade);
	
	while (idade != 0){
		do{
			printf("Informe sua opiniao: \n1 - Satisfatorio \n2 - Indiferente \n3 - Insatisfatorio \nOpcao:  ");			
			scanf("%d", &opiniao);
			system("cls");
			
		}while((opiniao != 1) && (opiniao != 2) && (opiniao != 3));		
		numPessoas++;
		
		if (opiniao == 1){
			somaIdade += idade;
			numPessoasSat++;
		}else{
			if (opiniao == 3)
				numPessoasInsat++;
		}
		
		printf("");
		printf("|------ PESQUISA DE SATISFACAO ------|");
		printf("\n\nInforme sua idade: ");
		scanf("%d", &idade);
	}
	
	media = (somaIdade / numPessoasSat);
	
	printf("\n");
	printf("|-------- RESULTADO DA PESQUISA ----------|");
	printf("\nNumero de pessoas satisfeitas: %d", numPessoasSat);
	printf("\nNumero de pessoas insatisfeitas: %d", numPessoasInsat);
	printf("\nMedia de idade das pessoas satisfeitas: %.2f", media);
	
	return (0);
}