// Fa�a um programa que leia um n�mero e informe se ele � divis�vel por cinco.

#include <stdio.h>

int main(){
	int num;
	
	printf("Informe o numero: ");
	scanf("%d", &num);
	if (num % 5 == 0)
	   printf("\nO numero %d e divisivel por 5.", num);
    else
       printf("\nO numero %d nao e divisivel por 5.", num);	
	   
	return (0);
}
