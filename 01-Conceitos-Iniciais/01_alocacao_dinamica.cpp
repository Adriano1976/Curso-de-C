/* No c�digo a seguir, est� sendo utilizado a Biblioteca `stdio.h` para as fun��es de entrada e sa�da padr�o, 
e a Biblioteca `stdlib.h` para a aloca��o de mem�ria din�mica. A fun��o `main()` � a fun��o principal do 
programa. Uma Vari�vel Ponteiro chamada `ptr` � declarada para armazenar endere�os de mem�ria. Primeiro, 
� impresso o endere�o de `ptr`, que inicialmente aponta para um local indefinido na mem�ria. Em seguida, � 
alocado espa�o na mem�ria para um **Par�metro** do tipo `int` utilizando a fun��o `malloc()`, e seu endere�o e 
valor s�o impressos. O valor � ent�o atribu�do a `*ptr` e impresso novamente. Depois, uma **Vari�vel** `x` � 
declarada e inicializada com o valor 20, e o endere�o de `x` � atribu�do a `ptr`, resultando na impress�o do 
endere�o e valor de `x`. Finalmente, mais espa�o � alocado na mem�ria para outro **Par�metro** do tipo `int` 
e suas informa��es s�o impressas. O programa finaliza aguardando uma intera��o do usu�rio atrav�s da fun��o 
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


