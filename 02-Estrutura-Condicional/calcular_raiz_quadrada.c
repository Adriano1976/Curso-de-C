#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, quadrado;
	float raiz;	
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		raiz = sqrt(num);
	 	printf("\nO numero e par.");
		printf("\nA raiz quadrada de %d tem como resultado %.3f", num, raiz);
	}else{
		quadrado = num * num;
		printf("\nO numero e impar.");	
		printf("\nO numero ao quadrada de %d tem como resultado %d", num, quadrado); 	
	}	
	
	return (0);
}
