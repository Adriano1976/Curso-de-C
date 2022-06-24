/* Construa um programa que efetue a leitura de quatro notas de 20 alunos, calcule
a média de cada aluno e a média da turma */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 20

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float media[TAM];
	float notas[TAM][4];
	float somaTurma, mediaTurma, soma;
	int i, j;
	
	somaTurma = 0;
	mediaTurma = 0;	
	for (i = 0; i < TAM; i++)
	{		
		soma = 0;
		for (j = 0; j < 4; j++)
		{
			printf("\nInforme a nota %d do aluno %d: ", j + 1, i + 1);
			scanf("%f", notas[i][j]);			
			soma = soma + notas[i][j];
		}
		
		media[i] = soma / 4;
		somaTurma = somaTurma + media[i];
	}
	
	mediaTurma = somaTurma / TAM;
	for (i = 0; i < TAM; i++)
	{
		printf("Média do aluno %d é: %.2f\n", i, media[i]);
	}
	
	printf("Média da turma: %.2f\n", mediaTurma);
	
	return (0);
}
