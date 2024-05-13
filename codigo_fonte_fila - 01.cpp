/* No c�digo a seguir, est� sendo implementada uma estrutura de fila em C. 
Inicialmente, s�o inclu�das as bibliotecas necess�rias, como stdio.h e stdlib.h, 
e definida uma constante para o tamanho m�ximo da fila. A estrutura da fila � 
definida atrav�s de uma struct que armazena os dados, o �ndice de in�cio e o 
�ndice de fim da fila. S�o declaradas vari�veis globais e prototipadas as fun��es 
para entrar, sair e mostrar a fila, al�m de exibir o menu de op��es. Na fun��o 
principal, s�o inicializados os valores da fila e executado um loop para exibir o 
menu e processar as op��es do usu�rio. As fun��es fila_entrar() e fila_sair() s�o 
respons�veis por adicionar e remover elementos da fila, respectivamente, com 
verifica��es de capacidade e vaziedade da fila. A fun��o fila_mostrar() exibe o 
conte�do da fila e a fun��o menu_mostrar() apresenta as op��es dispon�veis ao 
usu�rio. O programa continua em execu��o at� que o usu�rio escolha sair, ao 
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

//Vari�veis globais
struct tfila fila;
int op;

//Protipa��o
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

//Fun��o principal
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
		printf("\nA fila est� cheia, volte outro dia!\n\n");
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
		printf("\nFila vazia, mas logo aparece algu�m!\n\n");
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

//Mostrar o conte�do da Fila
void fila_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", fila.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de op��es
void menu_mostrar() {
	printf("\nEscolha uma op��o:\n");
	printf("1 - Incluir na Fila\n");
	printf("2 - Excluir da Fila\n");
	printf("0 - Sair\n\n");
}

