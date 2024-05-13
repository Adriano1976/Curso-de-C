/* No código a seguir, está sendo implementada uma estrutura de pilha em linguagem C. 
Primeiramente, são incluídas as bibliotecas necessárias, como stdio.h e stdlib.h, 
além de definida uma constante tamanho igual a 5 para determinar o tamanho máximo da pilha. 
Em seguida, é declarada a estrutura tpilha, que possui um array de inteiros para armazenar 
os dados, e duas variáveis ini e fim para indicar o início e o fim da pilha. Após isso, 
são declaradas as funções para operações básicas em uma pilha, como pilha_entrar() para 
adicionar elementos, pilha_sair() para remover elementos e pilha_mostrar() para exibir o 
conteúdo da pilha. A função principal main() inicializa a pilha, define um loop que exibe 
um menu de opções (empilhar, desempilhar ou sair) e realiza a operação escolhida pelo usuário, 
utilizando switch-case. Cada operação é implementada de acordo com as regras da estrutura de 
dados de pilha, verificando se a pilha está cheia ou vazia antes de realizar as operações de 
empilhar ou desempilhar, respectivamente. */


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura da Pilha
struct tpilha {
	int dados[tamanho];
	int ini;
	int fim;
};

//Variáveis globais
struct tpilha pilha;
int op;

//Protipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//Função principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	
	while (op != 0) {
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		
		switch (op) {
			case 1:
				pilha_entrar();
			break;
			case 2:
				pilha_sair();
			break;
		}
	}
	return(0);
}

//Adicionar um elemento no final da Pilha
void pilha_entrar(){
	if (pilha.fim == tamanho) {
		printf("\nA pilha está cheia, impossível empilhar!\n\n");
		system("pause");
	}
	else {
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}

//Retirar o último elemento da Pilha
void pilha_sair() {
	if (pilha.ini == pilha.fim) {
		printf("\nA pilha está vazia, impossível desempilhar!\n\n");
		system("pause");
	}
	else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conteúdo da Pilha
void pilha_mostrar() {
	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}

//Mostrar o menu de opções
void menu_mostrar() {
	printf("\nEscolha uma opção:\n");
	printf("1 - Empilhar\n");
	printf("2 - Desempilhar\n");
	printf("0 - Sair\n\n");
}


