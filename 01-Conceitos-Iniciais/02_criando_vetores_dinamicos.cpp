/* No código a seguir, está sendo utilizado o C Standard Library, que
inclui as Bibliotecas `<stdio.h>`, `<stdlib.h>`, e `<math.h>`, 
para operações de entrada/saída, alocação de memória dinâmica e funções 
matemáticas, respectivamente. A Função `main()` é o ponto de entrada 
do programa, onde é declarado um Parâmetro `tam` para armazenar o 
tamanho do vetor. Um ponteiro `vetor` é alocado dinamicamente para armazenar 
valores inteiros. Em seguida, é solicitado ao usuário que informe o tamanho 
do vetor. Um loop `for` é usado para preencher o vetor com potências de 2, 
utilizando a Função `pow()` da biblioteca `<math.h>`. Finalmente, os 
valores do vetor são impressos na tela, e o programa espera por uma tecla 
antes de encerrar, utilizando a função `system("Pause")`. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int tam;
int *vetor;
printf ("Escolha o tamanho do vetor: ");
scanf("%d", &tam);
vetor = (int *) malloc(sizeof (int)*tam);
for (int i = 0; i < tam; i++) {
vetor[i] = pow(2,i);
printf ("Posicao %d: %d\n", i, vetor[i]);
}
system("Pause");
return(0);
}

