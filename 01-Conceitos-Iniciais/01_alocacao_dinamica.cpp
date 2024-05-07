/* No código a seguir, está sendo utilizado a Biblioteca `stdio.h` para as funções de entrada e saída padrão, 
e a Biblioteca `stdlib.h` para a alocação de memória dinâmica. A função `main()` é a função principal do 
programa. Uma Variável Ponteiro chamada `ptr` é declarada para armazenar endereços de memória. Primeiro, 
é impresso o endereço de `ptr`, que inicialmente aponta para um local indefinido na memória. Em seguida, é 
alocado espaço na memória para um **Parâmetro** do tipo `int` utilizando a função `malloc()`, e seu endereço e 
valor são impressos. O valor é então atribuído a `*ptr` e impresso novamente. Depois, uma **Variável** `x` é 
declarada e inicializada com o valor 20, e o endereço de `x` é atribuído a `ptr`, resultando na impressão do 
endereço e valor de `x`. Finalmente, mais espaço é alocado na memória para outro **Parâmetro** do tipo `int` 
e suas informações são impressas. O programa finaliza aguardando uma interação do usuário através da função 
`system("Pause")` e retorna 0. */

# include <stdio.h>
# include <stdlib.h>

main() {
	int *ptr;
	
	printf ("Endereco: %p\n\n", ptr);
	ptr = (int *) malloc(sizeof (int));
	printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
	
	*ptr = 10;
	printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
	int x;
	
	x = 20;
	ptr = &x;
	printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
	ptr = (int *) malloc(sizeof (int));
	printf ("Endereco: %p \nValor: %d\n\n", ptr, *ptr);
	
	system("Pause");
	return(0);
}


