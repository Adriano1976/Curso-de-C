/* No c�digo a seguir, est� sendo utilizado o C Standard Library, que
inclui as Bibliotecas `<stdio.h>`, `<stdlib.h>`, e `<math.h>`, 
para opera��es de entrada/sa�da, aloca��o de mem�ria din�mica e fun��es 
matem�ticas, respectivamente. A Fun��o `main()` � o ponto de entrada 
do programa, onde � declarado um Par�metro `tam` para armazenar o 
tamanho do vetor. Um ponteiro `vetor` � alocado dinamicamente para armazenar 
valores inteiros. Em seguida, � solicitado ao usu�rio que informe o tamanho 
do vetor. Um loop `for` � usado para preencher o vetor com pot�ncias de 2, 
utilizando a Fun��o `pow()` da biblioteca `<math.h>`. Finalmente, os 
valores do vetor s�o impressos na tela, e o programa espera por uma tecla 
antes de encerrar, utilizando a fun��o `system("Pause")`. */

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

