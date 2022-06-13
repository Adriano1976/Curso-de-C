/* Escreva um programa que receba a idade e a altura de várias pessoas, calcule e
apresente a média de altura e idade das pessoas. A entrada de dados é encerrada
quando for digitado o valor zero para a idade. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, numPessoas;
	float altura, somaAltura, somaIdade;
	char sexo;
	
	somaAltura = 0.0;
	somaIdade = 0.0;
	
	printf("\nInforme a idade: ");
	scanf("%d", &idade);	
	
	numPessoas = 0;
	while (idade != 0){
		
		printf("Informe a altura: ");
		scanf("%f", &altura);
		system("cls");
		numPessoas++;
		
		somaIdade+= idade;
		somaAltura += altura;
		
		printf("\nInforme a idade: ");
		scanf("%d", &idade);
	}
	
	printf("");
	printf("\nMedia de altura: %.2f", somaAltura / numPessoas);
	printf("\nMedia de idade: %.2f", somaIdade / numPessoas);
	
	return (0);
}