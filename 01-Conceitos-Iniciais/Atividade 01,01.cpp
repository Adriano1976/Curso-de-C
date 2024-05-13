#include <stdio.h>
#include <stdlib.h>

int main() {
    // a) Defina um ponteiro do tipo inteiro
    int *ptr;

    // b) Faça alocação dinâmica para o ponteiro recém-criado
    ptr = (int *) malloc(sizeof(int));

    // c) Preencha a memória com o valor 42
    *ptr = 42;

    // d) Imprima o endereço do ponteiro na memória e o valor contido nele
    printf("Endereço do ponteiro: %p\n", ptr);
    printf("Valor contido no ponteiro: %d\n", *ptr);

    // Libere a memória alocada dinamicamente
    free(ptr);

    return 0;
}

