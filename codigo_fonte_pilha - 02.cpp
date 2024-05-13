/* Esse c�digo em C implementa uma estrutura de dados conhecida como pilha. 
Vamos entender a anatomia e a fisiologia do c�digo:

1. Bibliotecas: As bibliotecas `stdio.h`, `stdlib.h` e `locale.h` s�o inclu�das para 
permitir opera��es de entrada/sa�da, aloca��o de mem�ria e configura��es de localiza��o, 
respectivamente.

2. Constantes: A constante `TAMANHO_PILHA` define o tamanho m�ximo da pilha.

3. Estrutura da Pilha: A estrutura `Pilha` � definida para armazenar os dados da pilha, 
incluindo um array `dados` para armazenar os elementos, e os �ndices `inicio` e `fim` 
para controlar a posi��o dos elementos na pilha.

4. Vari�veis globais: � declarada uma vari�vel global do tipo `Pilha` chamada `pilha`, 
que ser� utilizada para manipular a pilha.

5. Prototipa��o de fun��es: S�o declaradas as fun��es `entrarNaPilha`, `sairDaPilha`, 
`mostrarPilha` e `mostrarMenu`, indicando ao compilador sobre suas exist�ncias antes 
de serem utilizadas.

6. Fun��o principal (`main`): Aqui come�a a execu��o do programa. Primeiro, � configurada 
a localiza��o para o Portugu�s. Em seguida, � iniciado um loop que apresenta o menu de 
op��es ao usu�rio e executa as a��es de acordo com a escolha dele, at� que a op��o `0` 
seja selecionada para sair.

7. Fun��es de manipula��o da pilha:
    - `entrarNaPilha`: Adiciona um elemento no final da pilha, desde que ela n�o esteja cheia.
    - `sairDaPilha`: Remove o �ltimo elemento da pilha, desde que ela n�o esteja vazia.
    - `mostrarPilha`: Exibe o conte�do da pilha, mostrando todos os elementos presentes.
    - `mostrarMenu`: Apresenta as op��es dispon�veis para o usu�rio. */


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define TAMANHO_PILHA 5

//Estrutura da Pilha
struct Pilha {
	int dados[TAMANHO_PILHA];
	int inicio;
	int fim;
};

//Vari�veis globais
struct Pilha pilha;

//Protipa��o
void entrarNaPilha();
void sairDaPilha();
void mostrarPilha();
void mostrarMenu();

//Fun��o principal
int main() {
	setlocale(LC_ALL, "Portuguese");
	int opcao = 1;
	pilha.inicio = 0;
	pilha.fim = 0;

	while (opcao != 0) {
		system("cls");
		mostrarPilha();
		mostrarMenu();
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:
				entrarNaPilha();
				break;
			case 2:
				sairDaPilha();
				break;
		}
	}

	return 0;
}

//Adicionar um elemento no final da Pilha
void entrarNaPilha() {
	if (pilha.fim == TAMANHO_PILHA) {
		printf("\nA pilha est� cheia, imposs�vel empilhar!\n\n");
		system("pause");
	} else {
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}

//Retirar o �ltimo elemento da Pilha
void sairDaPilha() {
	if (pilha.inicio == pilha.fim) {
		printf("\nA pilha est� vazia, imposs�vel desempilhar!\n\n");
		system("pause");
	} else {
		pilha.dados[pilha.fim - 1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conte�do da Pilha
void mostrarPilha() {
	printf("[ ");
	for (int i = 0; i < TAMANHO_PILHA; i++) {
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de op��es
void mostrarMenu() {
	printf("Escolha uma op��o:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
}

