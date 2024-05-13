/* No c�digo a seguir, est� sendo realizado o seguinte processo: primeiro, � solicitado ao usu�rio 
que insira o tamanho desejado para dois vetores din�micos. Em seguida, s�o alocados dinamicamente os 
espa�os necess�rios para esses vetores utilizando a fun��o malloc. Ap�s a aloca��o, o primeiro 
vetor � preenchido com pot�ncias de 2, enquanto o segundo � preenchido com pot�ncias de 3, utilizando 
as fun��es pow da biblioteca math.h. Ap�s o preenchimento, os dois vetores s�o impressos na 
tela. Por fim, � liberada a mem�ria alocada dinamicamente utilizando a fun��o free. Esse c�digo 
realiza uma opera��o simples de aloca��o din�mica de mem�ria e preenchimento de vetores com pot�ncias 
de 2 e 3, demonstrando um exemplo b�sico de uso de aloca��o din�mica em C. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tamanho;
    int *vetorPot2, *vetorPot3;
    
    // b) Pergunte ao usu�rio o tamanho do vetor din�mico e leia esse valor na vari�vel inteira
    printf("Digite o tamanho do vetor dinamico: ");
    scanf("%d", &tamanho);
    
    // c) Aloque dinamicamente os dois vetores usando a fun��o malloc
    vetorPot2 = (int *)malloc(tamanho * sizeof(int));
    vetorPot3 = (int *)malloc(2 * tamanho * sizeof(int));
    
    // d) Preencha o primeiro vetor com pot�ncias de 2
    for (int i = 0; i < tamanho; i++) {
        vetorPot2[i] = pow(2, i+1);
    }
    
    // e) Preencha o segundo vetor com pot�ncias de 3
    for (int i = 0; i < 2 * tamanho; i++) {
        vetorPot3[i] = pow(3, i+1);
    }
    
    // Imprimir os vetores preenchidos
    printf("Vetor de potencias de 2:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorPot2[i]);
    }
    
    printf("\n\nVetor de potencias de 3:\n");
    for (int i = 0; i < 2 * tamanho; i++) {
        printf("%d ", vetorPot3[i]);
    }
    
    // Liberar a mem�ria alocada dinamicamente
    free(vetorPot2);
    free(vetorPot3);
    
    return 0;
}

