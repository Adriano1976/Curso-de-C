#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main(){
	
	float r;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	printf("\n Valor da Area: %f", pi * pow(r,2));
	printf("\n Valor do Perimetro: %f", 2 * pi * r);
	
	return (0);
}