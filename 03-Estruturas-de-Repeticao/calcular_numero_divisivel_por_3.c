#include <stdio.h>

/* Elabore um programa que apresente todos os números divisíveis por três que
sejam menores que 100. */
int main(){
	
	int i;
	for (i = 3; i <= 100; i = i + 3) {
		printf("%d \n", i);
	}
	
	return (0);
}