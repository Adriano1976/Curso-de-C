#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO_FILA 10

typedef struct {
    char nome[100];
    char horaChegada[10];
} Cliente;

typedef struct {
    Cliente clientes[TAMANHO_FILA];
    int inicio;
    int fim;
} Fila;

Fila fila_clientes;

void inicializar_fila() {
    fila_clientes.inicio = 0;
    fila_clientes.fim = 0;
}

int fila_vazia() {
    return fila_clientes.inicio == fila_clientes.fim;
}

int fila_cheia() {
    return fila_clientes.fim == TAMANHO_FILA;
}

void enfileirar(Cliente cliente) {
    if (fila_cheia()) {
        printf("\nA fila está cheia, não é possível enfileirar mais clientes.\n\n");
        system("pause");
    } else {
        fila_clientes.clientes[fila_clientes.fim] = cliente;
        fila_clientes.fim++;
    }
}

Cliente desenfileirar() {
    Cliente cliente;
    
    if (fila_vazia()) {
        printf("\nA fila está vazia, não é possível desenfileirar clientes.\n\n");
        system("pause");
        return cliente;
    }
    
    cliente = fila_clientes.clientes[fila_clientes.inicio];
    fila_clientes.inicio++;
    
    if (fila_clientes.inicio == fila_clientes.fim) {
        fila_clientes.inicio = 0;
        fila_clientes.fim = 0;
    }
    
    return cliente;
}

void mostrar_fila() {
    if (fila_vazia()) {
        printf("Não há clientes na fila.\n");
    } else {
        printf("Clientes na fila:\n");
        for (int i = fila_clientes.inicio; i < fila_clientes.fim; i++) {
            printf("Nome: %s, Hora de chegada: %s\n", fila_clientes.clientes[i].nome, fila_clientes.clientes[i].horaChegada);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    inicializar_fila();

    while (opcao != 0) {
        system("cls");
        mostrar_fila();
        printf("\nEscolha uma opção:\n");
        printf("1 - Enfileirar cliente\n");
        printf("2 - Desenfileirar cliente\n");
        printf("0 - Sair\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Cliente cliente;
                printf("\nDigite o nome do cliente: ");
                scanf(" %[^\n]s", cliente.nome);
                printf("Digite a hora de chegada do cliente: ");
                scanf(" %[^\n]s", cliente.horaChegada);
                enfileirar(cliente);
                break;
            case 2:
                Cliente cliente_desenfileirado = desenfileirar();
                printf("\nCliente desenfileirado: %s, Hora de chegada: %s\n\n", cliente_desenfileirado.nome, cliente_desenfileirado.horaChegada);
                system("pause");
                break;
        }
    }

    return 0;
}
