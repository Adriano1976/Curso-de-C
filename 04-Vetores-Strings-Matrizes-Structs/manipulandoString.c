#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");	
	char nome[80], sobrenome[80];
	
	printf("Digite o seu nome: ");
	gets(nome); /* Imprime uma string de cada vez */
	printf("Digite o seu sobrenome: ");
	gets(sobrenome); /* Imprime uma string de cada vez */
	strcat(nome, sobrenome);
	
	printf("Ap�s concatenar as strings, o nome �: %s\n", nome);
	if (strstr(sobrenome, nome) == 0){
		printf("Agora o sobrenome est� contido na vari�vel nome. \n");
	}
	strlwr(nome);
	printf("O nome em min�sculo �: %s\n", nome);
	strupr(nome);
	printf("O nome em mai�sculo �: %s\n", nome);
	
	return (0);
}
