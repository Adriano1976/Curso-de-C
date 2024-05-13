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
        printf("\nA fila est� cheia, volte outro dia!\n\n");
        system("pause");
    } else {
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
}

void sairDaFila() {
    if (fila.inicio == fila.fim) {
        printf("\nFila vazia, mas logo aparece algu�m!\n\n");
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
    printf("\nEscolha uma op��o:\n");
    printf("1 - Incluir na Fila\n");
    printf("2 - Excluir da Fila\n");
    printf("0 - Sair\n\n");
}


/*
An�lise do C�digo Fonte: Esse c�digo em C implementa uma fila simples utilizando um array 
e algumas fun��es para manipula��o da fila. Vamos entender a anatomia e fisiologia desse c�digo:

Anatomia:

1. Bibliotecas: As bibliotecas `stdio.h`, `stdlib.h` e `locale.h` s�o inclu�das para 
permitir opera��es de entrada/sa�da, aloca��o de mem�ria e configura��o de localiza��o, 
respectivamente.

2. Constante: A constante `TAMANHO_FILA` define o tamanho m�ximo da fila.

3. Estrutura Fila: Define uma estrutura chamada `Fila`, que cont�m um array `dados` 
para armazenar os elementos da fila e dois inteiros `inicio` e `fim` para rastrear o 
in�cio e o fim da fila.

4. Vari�vel Global: � criada uma vari�vel global `fila` do tipo `Fila` para 
representar a fila.

5. Prot�tipos de Fun��o: Prot�tipos das fun��es `entrarNaFila`, `sairDaFila`, 
`mostrarFila` e `mostrarMenu` s�o declarados antes da fun��o `main()` para informar 
ao compilador sobre essas fun��es.

6. Fun��o Principal (main): A fun��o `main()` � o ponto de entrada do programa. 
Inicializa a fila, exibe o menu e processa as op��es escolhidas pelo usu�rio.

7. Loop While: O programa entra em um loop `while` que continua enquanto a op��o 
digitada pelo usu�rio for diferente de zero.

8. Limpeza da Tela: Antes de mostrar a fila e o menu, a tela � limpa usando o 
comando `system("cls")` para sistemas Windows. No Linux, seria `system("clear")`.

9. Switch Case: O bloco `switch` � usado para escolher a a��o a ser executada com 
base na op��o selecionada pelo usu�rio.

Fisiologia:

1. Inserir na Fila: A fun��o `entrarNaFila()` permite que o usu�rio insira um 
valor na fila, desde que ela n�o esteja cheia. O valor � lido do usu�rio e inserido 
no final da fila.

2. Remover da Fila: A fun��o `sairDaFila()` remove o primeiro elemento da fila, 
se ela n�o estiver vazia. Os elementos restantes s�o deslocados para a esquerda para 
preencher o espa�o vazio.

3. Mostrar Fila: A fun��o `mostrarFila()` exibe todos os elementos da fila, entre 
colchetes, na ordem em que foram inseridos.

4. Mostrar Menu: A fun��o `mostrarMenu()` exibe as op��es dispon�veis para o 
usu�rio, como incluir na fila, excluir da fila ou sair do programa.

Essa � a anatomia e fisiologia b�sica desse c�digo em C para implementar uma fila simples.
*/

