#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_FILA 5

struct Fila {
    int dados[TAMANHO_FILA];
    int inicio;
    int fim;
};

struct Fila fila;

void entrarNaFila();
void sairDaFila();
void mostrarFila();
void mostrarMenu();

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao = 1;
    fila.inicio = 0;
    fila.fim = 0;

    while (opcao != 0) {
        system("cls");
        mostrarFila();
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                entrarNaFila();
                break;
            case 2:
                sairDaFila();
                break;
        }
    }
    return 0;
}

void entrarNaFila() {
    if (fila.fim == TAMANHO_FILA) {
        printf("\nA fila está cheia, volte outro dia!\n\n");
        system("pause");
    } else {
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
}

void sairDaFila() {
    if (fila.inicio == fila.fim) {
        printf("\nFila vazia, mas logo aparece alguém!\n\n");
        system("pause");
    } else {
        for (int i = 0; i < fila.fim - 1; i++) {
            fila.dados[i] = fila.dados[i + 1];
        }
        fila.dados[fila.fim - 1] = 0;
        fila.fim--;
    }
}

void mostrarFila() {
    printf("[ ");
    for (int i = 0; i < TAMANHO_FILA; i++) {
        printf("%d ", fila.dados[i]);
    }
    printf("]\n\n");
}

void mostrarMenu() {
    printf("\nEscolha uma opção:\n");
    printf("1 - Incluir na Fila\n");
    printf("2 - Excluir da Fila\n");
    printf("0 - Sair\n\n");
}


/*
Análise do Código Fonte: Esse código em C implementa uma fila simples utilizando um array 
e algumas funções para manipulação da fila. Vamos entender a anatomia e fisiologia desse código:

Anatomia:

1. Bibliotecas: As bibliotecas `stdio.h`, `stdlib.h` e `locale.h` são incluídas para 
permitir operações de entrada/saída, alocação de memória e configuração de localização, 
respectivamente.

2. Constante: A constante `TAMANHO_FILA` define o tamanho máximo da fila.

3. Estrutura Fila: Define uma estrutura chamada `Fila`, que contém um array `dados` 
para armazenar os elementos da fila e dois inteiros `inicio` e `fim` para rastrear o 
início e o fim da fila.

4. Variável Global: É criada uma variável global `fila` do tipo `Fila` para 
representar a fila.

5. Protótipos de Função: Protótipos das funções `entrarNaFila`, `sairDaFila`, 
`mostrarFila` e `mostrarMenu` são declarados antes da função `main()` para informar 
ao compilador sobre essas funções.

6. Função Principal (main): A função `main()` é o ponto de entrada do programa. 
Inicializa a fila, exibe o menu e processa as opções escolhidas pelo usuário.

7. Loop While: O programa entra em um loop `while` que continua enquanto a opção 
digitada pelo usuário for diferente de zero.

8. Limpeza da Tela: Antes de mostrar a fila e o menu, a tela é limpa usando o 
comando `system("cls")` para sistemas Windows. No Linux, seria `system("clear")`.

9. Switch Case: O bloco `switch` é usado para escolher a ação a ser executada com 
base na opção selecionada pelo usuário.

Fisiologia:

1. Inserir na Fila: A função `entrarNaFila()` permite que o usuário insira um 
valor na fila, desde que ela não esteja cheia. O valor é lido do usuário e inserido 
no final da fila.

2. Remover da Fila: A função `sairDaFila()` remove o primeiro elemento da fila, 
se ela não estiver vazia. Os elementos restantes são deslocados para a esquerda para 
preencher o espaço vazio.

3. Mostrar Fila: A função `mostrarFila()` exibe todos os elementos da fila, entre 
colchetes, na ordem em que foram inseridos.

4. Mostrar Menu: A função `mostrarMenu()` exibe as opções disponíveis para o 
usuário, como incluir na fila, excluir da fila ou sair do programa.

Essa é a anatomia e fisiologia básica desse código em C para implementar uma fila simples.
*/

