/* Esse código em C implementa uma estrutura de dados conhecida como pilha. 
Vamos entender a anatomia e a fisiologia do código:

1. Bibliotecas: As bibliotecas `stdio.h`, `stdlib.h` e `locale.h` são incluídas para 
permitir operações de entrada/saída, alocação de memória e configurações de localização, 
respectivamente.

2. Constantes: A constante `TAMANHO_PILHA` define o tamanho máximo da pilha.

3. Estrutura da Pilha: A estrutura `Pilha` é definida para armazenar os dados da pilha, 
incluindo um array `dados` para armazenar os elementos, e os índices `inicio` e `fim` 
para controlar a posição dos elementos na pilha.

4. Variáveis globais: É declarada uma variável global do tipo `Pilha` chamada `pilha`, 
que será utilizada para manipular a pilha.

5. Prototipação de funções: São declaradas as funções `entrarNaPilha`, `sairDaPilha`, 
`mostrarPilha` e `mostrarMenu`, indicando ao compilador sobre suas existências antes 
de serem utilizadas.

6. Função principal (`main`): Aqui começa a execução do programa. Primeiro, é configurada 
a localização para o Português. Em seguida, é iniciado um loop que apresenta o menu de 
opções ao usuário e executa as ações de acordo com a escolha dele, até que a opção `0` 
seja selecionada para sair.

7. Funções de manipulação da pilha:
    - `entrarNaPilha`: Adiciona um elemento no final da pilha, desde que ela não esteja cheia.
    - `sairDaPilha`: Remove o último elemento da pilha, desde que ela não esteja vazia.
    - `mostrarPilha`: Exibe o conteúdo da pilha, mostrando todos os elementos presentes.
    - `mostrarMenu`: Apresenta as opções disponíveis para o usuário. */


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

//Variáveis globais
struct Pilha pilha;

//Protipação
void entrarNaPilha();
void sairDaPilha();
void mostrarPilha();
void mostrarMenu();

//Função principal
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
		printf("\nA pilha está cheia, impossível empilhar!\n\n");
		system("pause");
	} else {
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}

//Retirar o último elemento da Pilha
void sairDaPilha() {
	if (pilha.inicio == pilha.fim) {
		printf("\nA pilha está vazia, impossível desempilhar!\n\n");
		system("pause");
	} else {
		pilha.dados[pilha.fim - 1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conteúdo da Pilha
void mostrarPilha() {
	printf("[ ");
	for (int i = 0; i < TAMANHO_PILHA; i++) {
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de opções
void mostrarMenu() {
	printf("Escolha uma opção:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
}

