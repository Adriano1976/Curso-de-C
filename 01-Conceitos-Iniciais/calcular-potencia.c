/* Escreva um programa que receba dois números, calcule e apresente o resultado
do primeiro número elevado ao segundo. */

#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2, total;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	printf("informe o segundo valor: ");
	scanf("%f", &num2);
	
	total = pow(num1, num2);
	
	printf("\nO valor %.2f elevado a %.2f tem como resultado %.2f", num1, num2, total);
	return (0);
}