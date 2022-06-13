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
	
	printf("Informe o numero de notas da disciplina: ");
	scanf("%d", &numNota);
	printf("\nInforme o codigo do aluno: ");
	scanf("%d", &cod);
	
	while (cod != 0) {		
		
		soma = 0;		
		for (i = 1; i <= numNota; i++){
			printf("\nInforme a %d nota do aluno: ", i);
			scanf("%f", &nota);			
			soma +=nota;
		}		
		
		media = soma / numNota;		
		if (media >= 6){
			numAprovado ++;
		}else{
			numReprovado ++;
		}
		
		printf("Informe o codigo do aluno: ");
		scanf("%d", &cod);
	} 
	
	printf("\nO numero de aprovados: %d", numAprovado);
	printf("\nO numero de reprovados: %d", numReprovado);
	
	return (0);
}