#include <stdio.h>
#include <stdlib.h>

int main() {
    // a) Defina um ponteiro do tipo inteiro
    int *ptr;

    // b) Fa�a aloca��o din�mica para o ponteiro rec�m-criado
    ptr = (int *) malloc(sizeof(int));

    // c) Preencha a mem�ria com o valor 42
    *ptr = 42;

    // d) Imprima o endere�o do ponteiro na mem�ria e o valor contido nele
    printf("Endere�o do ponteiro: %p\n", ptr);
    printf("Valor contido no ponteiro: %d\n", *ptr);

    // Libere a mem�ria alocada dinamicamente
    free(ptr);

    return 0;
}

