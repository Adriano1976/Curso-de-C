/* No código a seguir, está sendo realizado o seguinte processo: primeiro, é solicitado ao usuário 
que insira o tamanho desejado para dois vetores dinâmicos. Em seguida, são alocados dinamicamente os 
espaços necessários para esses vetores utilizando a função malloc. Após a alocação, o primeiro 
vetor é preenchido com potências de 2, enquanto o segundo é preenchido com potências de 3, utilizando 
as funções pow da biblioteca math.h. Após o preenchimento, os dois vetores são impressos na 
tela. Por fim, é liberada a memória alocada dinamicamente utilizando a função free. Esse código 
realiza uma operação simples de alocação dinâmica de memória e preenchimento de vetores com potências 
de 2 e 3, demonstrando um exemplo básico de uso de alocação dinâmica em C. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int tamanho;
    int *vetorPot2, *vetorPot3;
    
    // b) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira
    printf("Digite o tamanho do vetor dinamico: ");
    scanf("%d", &tamanho);
    
    // c) Aloque dinamicamente os dois vetores usando a função malloc
    vetorPot2 = (int *)malloc(tamanho * sizeof(int));
    vetorPot3 = (int *)malloc(2 * tamanho * sizeof(int));
    
    // d) Preencha o primeiro vetor com potências de 2
    for (int i = 0; i < tamanho; i++) {
        vetorPot2[i] = pow(2, i+1);
    }
    
    // e) Preencha o segundo vetor com potências de 3
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
    
    // Liberar a memória alocada dinamicamente
    free(vetorPot2);
    free(vetorPot3);
    
    return 0;
}

