#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
};

int main(){
	
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	struct produto ficha;
	
	printf("Digite o c�digo do produto: ");
	scanf("%d", &ficha.codigo);
	fflush(stdin);
	printf("Digite a descri��o do produto: ");
	scanf("%s", &ficha.descricao);
	fflush(stdin);
	printf("Digite o pre�o do produto: ");
	scanf("%.2f", &ficha.preco);
	fflush(stdin);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	fflush(stdin);
	printf("");
	
	printf("C�digo: %d\n", ficha.codigo);
	printf("Descri��o: %s\n", ficha.descricao);
	printf("Pre�o: %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return (0);	
}
