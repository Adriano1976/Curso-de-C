/* No c�digo a seguir, est� sendo implementada uma estrutura de dados do tipo fila utilizando 
um array em C. A fila � gerenciada por uma estrutura chamada `tfila`, que cont�m um array de 
tamanho definido (`tamanho`), al�m dos �ndices `ini` e `fim` para controlar as opera��es de 
inser��o e remo��o. A fun��o principal `main` inicializa a fila e apresenta um menu de op��es 
para o usu�rio interagir, podendo escolher entre inserir um novo elemento na fila (`fila_entrar`) 
ou remover o elemento mais antigo (`fila_sair`). A fun��o `fila_entrar` verifica se a fila est� 
cheia antes de permitir a inser��o de um novo elemento; se estiver cheia, exibe uma mensagem de 
erro. A fun��o `fila_sair` verifica se a fila est� vazia antes de tentar remover um elemento; 
se estiver vazia, exibe uma mensagem informativa. A fun��o `fila_mostrar` exibe o conte�do atual 
da fila, enquanto `menu_mostrar` apresenta as op��es de intera��o ao usu�rio. Todo o processo 
ocorre dentro de um loop que continua executando at� que o usu�rio opte por sair, digitando a 
op��o `0`. */


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Constantes
#define TAMANHO_FILA 10

//Estrutura da Pilha
typedef struct {
    char nome[100];
    char horaChegada[10];
} Cliente;

//Estrutura da Pilha
typedef struct {
    Cliente clientes[TAMANHO_FILA];
    int inicio;
    int fim;
} Fila;

//Vari�veis globais
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

//Adicionar um elemento no final da Fila
void enfileirar(Cliente cliente) {
    if (fila_cheia()) {
        printf("\nA fila est� cheia, n�o � poss�vel enfileirar mais clientes.\n\n");
        system("pause");
    } else {
        fila_clientes.clientes[fila_clientes.fim] = cliente;
        fila_clientes.fim++;
    }
}

//Retirar o primeiro elemento da Fila
Cliente desenfileirar() {
    Cliente cliente;
    
    if (fila_vazia()) {
        printf("\nA fila est� vazia, n�o � poss�vel desenfileirar clientes.\n\n");
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

//Mostrar o conte�do da Fila
void mostrar_fila() {
    if (fila_vazia()) {
        printf("N�o h� clientes na fila.\n");
    } else {
        printf("Clientes na fila:\n");
        for (int i = fila_clientes.inicio; i < fila_clientes.fim; i++) {
            printf("Nome: %s, Hora de chegada: %s\n", fila_clientes.clientes[i].nome, fila_clientes.clientes[i].horaChegada);
        }
    }
}

//Fun��o principal
int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    inicializar_fila();

    while (opcao != 0) {
        system("cls");
        mostrar_fila();
        printf("\nEscolha uma op��o:\n");
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
