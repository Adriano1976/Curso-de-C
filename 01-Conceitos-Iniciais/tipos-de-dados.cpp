#include <stdio.h>

int main(){
	int idade, ano;
	float altura;
	char nome[30], sobrenome[30];
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("Digite o seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	ano = 2022 - idade;
	
	printf("\nNome: %s %s", nome, sobrenome);
	printf("\nAltura: %.2f", altura);
	printf("\nIdade: %d", idade);
	printf("\nAno de nascimento: %d", ano);
	
	return (0);	
}
