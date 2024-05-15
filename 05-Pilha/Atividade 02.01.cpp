//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Constantes
#define TAMANHO_PILHA 100

//Estrutura da Pilha de Livros
typedef struct {
    int codigo;
    char nome[100];
    char autor[50];
} Livro;

typedef struct {
    Livro livros[TAMANHO_PILHA];
    int inicio;
    int fim;
} PilhaLivros;

//Vari�veis globais
PilhaLivros pilha_livros;

//Prototipa��o
void empilharLivro();
void desempilharLivro();
void mostrarLivrosEmpilhados();

//Fun��o principal
int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    pilha_livros.inicio = 0;
    pilha_livros.fim = 0;

    while (opcao != 0) {
        system("cls");
        mostrarLivrosEmpilhados();
        printf("\n");
        printf("Escolha uma op��o:\n");
        printf("1 - Empilhar livro\n");
        printf("2 - Desempilhar livro\n");
        printf("0 - Sair\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                empilharLivro();
                break;
            case 2:
                desempilharLivro();
                break;
        }
    }

    return 0;
}

//Empilhar um livro na pilha
void empilharLivro() {
    if (pilha_livros.fim == TAMANHO_PILHA) {
        printf("\nA pilha de livros est� cheia. N�o � poss�vel empilhar mais livros.\n\n");
        system("pause");
    } else {
        printf("\nDigite o c�digo do livro: ");
        scanf("%d", &pilha_livros.livros[pilha_livros.fim].codigo);
        printf("Digite o nome do livro: ");
        scanf(" %[^\n]s", pilha_livros.livros[pilha_livros.fim].nome);
        printf("Digite o autor do livro: ");
        scanf(" %[^\n]s", pilha_livros.livros[pilha_livros.fim].autor);
        pilha_livros.fim++;
    }
}

//Desempilhar um livro da pilha
void desempilharLivro() {
    if (pilha_livros.inicio == pilha_livros.fim) {
        printf("\nA pilha de livros est� vazia. N�o � poss�vel desempilhar.\n\n");
        system("pause");
    } else {
        pilha_livros.fim--;
        printf("\nLivro desempilhado:\n");
        printf("C�digo: %d\nNome: %s\nAutor: %s\n\n", pilha_livros.livros[pilha_livros.fim].codigo, pilha_livros.livros[pilha_livros.fim].nome, pilha_livros.livros[pilha_livros.fim].autor);
    }
}

//Mostrar os livros empilhados na pilha
void mostrarLivrosEmpilhados() {
    if (pilha_livros.inicio == pilha_livros.fim) {
        printf("N�o h� livros empilhados.\n");
    } else {
        printf("Livros empilhados:\n");
        for (int i = pilha_livros.fim - 1; i >= pilha_livros.inicio; i--) {
            printf("C�digo: %d, Nome: %s, Autor: %s\n", pilha_livros.livros[i].codigo, pilha_livros.livros[i].nome, pilha_livros.livros[i].autor);
        }
    }
}

