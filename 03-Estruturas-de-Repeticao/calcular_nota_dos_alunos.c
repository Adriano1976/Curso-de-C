/*
O problema consiste em auxiliar um professor no fechamento das notas de uma
turma. Para tanto, deve ser construído um programa que leia o código do aluno,
o número de notas da disciplina e as notas. Calcule a média final de cada aluno e
informe o número de alunos aprovados e reprovados. Para ser aprovado, o estudante 
precisa obter média maior ou igual a seis. O programa é encerrado quando
é informado o código de aluno zero.
*/

#include <stdio.h>

int main(){
	
	float nota, soma, media;
	int cod, i, numNota, numAprovado, numReprovado;
	
	numAprovado = 0;
	numReprovado = 0;
	
	printf("\nInforme o numero de notas da disciplina: ");
	scanf("%d", &numNota);
	
	do {
		printf("\nInforme o codigo do aluno: ");
		scanf("%d", &cod);
		
		soma = 0;
		if (cod != 0){
			for (i = 1; i <= numNota; i++){
				printf("Informe a %d nota do aluno: ", i);
				scanf("%f", &nota);
				
				soma = soma + nota;
			}
		}
		
		media = soma / numNota;
		
		if (media >= 6){
			numAprovado ++;
		}else{
			numReprovado ++;
		}
	} while (cod != 0);
	
	printf("\nO numero de aprovados: %d", numAprovado);
	printf("\nO numero de reprovados: %d", numReprovado);
	
	return (0);
}