/* A prefeitura de uma cidade está coletando informações sobre o salário e o
número de filhos dos habitantes. A leitura de dados é realizada até que seja
informado o valor -1 para o salário. Apresente a média de salário da população,
a média de filhos e o maior salário. */

#include <stdio.h>

int main(){
	
	int filhos, numPessoas;
	float salario, somaFilho, somaSalario, msalario;	
	
	printf("Informe o salario: R$ ");
	scanf("%f", &salario);
	
	while (salario != 0){
		printf("Informe o numero de filhos: ");
		scanf("%d", &filhos);
		numPessoas++;
		
		if (salario > msalario) msalario = salario;
		
		somaFilho += filhos;
		somaSalario += salario;
		
		printf("Informe o salario: ");
		scanf("%f", &salario);		
	}
	
	printf("\nMedia de salario: R$ %.2f", somaFilho / numPessoas);
	printf("\nMaior salario: R$ %.2f", msalario);
	
	return (0);
}