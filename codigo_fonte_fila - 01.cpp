/* No código a seguir, está sendo implementada uma estrutura de fila em C. 
Inicialmente, são incluídas as bibliotecas necessárias, como stdio.h e stdlib.h, 
e definida uma constante para o tamanho máximo da fila. A estrutura da fila é 
definida através de uma struct que armazena os dados, o índice de início e o 
índice de fim da fila. São declaradas variáveis globais e prototipadas as funções 
para entrar, sair e mostrar a fila, além de exibir o menu de opções. Na função 
principal, são inicializados os valores da fila e executado um loop para exibir o 
menu e processar as opções do usuário. As funções fila_entrar() e fila_sair() são 
responsáveis por adicionar e remover elementos da fila, respectivamente, com 
verificações de capacidade e vaziedade da fila. A função fila_mostrar() exibe o 
conteúdo da fila e a função menu_mostrar() apresenta as opções disponíveis ao 
usuário. O programa continua em execução até que o usuário escolha sair, ao 
digitar "0". */


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura da Fila
struct tfila {
	int dados[tamanho];
	int ini;
	int fim;
};

//Variáveis globais
struct tfila fila;
int op;

//Protipação
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

//Função principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	
	while (op != 0) {
		system("cls");
		fila_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		
		switch (op) {
			case 1:
				fila_entrar();
			break;
			case 2:
				fila_sair();
			break;
		}
	}
	return(0);
}

//Adicionar um elemento no final da Fila
void fila_entrar(){
	if (fila.fim == tamanho) {
		printf("\nA fila está cheia, volte outro dia!\n\n");
		system("pause");
	}
	else {
		printf("\nDigite o valor a ser inserido: ");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
	}
}

//Retirar o primeiro elemento da Fila
void fila_sair() {
	if (fila.ini == fila.fim) {
		printf("\nFila vazia, mas logo aparece alguém!\n\n");
		system("pause");
	}
	else {
		int i;
		for (i = 0; i < tamanho; i++) {
			fila.dados[i] = fila.dados[i+1];
		}
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}

//Mostrar o conteúdo da Fila
void fila_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", fila.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de opções
void menu_mostrar() {
	printf("\nEscolha uma opção:\n");
	printf("1 - Incluir na Fila\n");
	printf("2 - Excluir da Fila\n");
	printf("0 - Sair\n\n");
}

