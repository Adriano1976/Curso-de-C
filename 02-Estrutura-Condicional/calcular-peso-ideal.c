/*
- De acordo com uma tabela médica, o peso ideal está relacionado com a altura e
o sexo. Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e
imprima o seu peso ideal, sabendo que:
-- Para homens -----> (72.7 x altura) - 58
-- Para mulheres ---> (62.1 x altura) - 44.7
*/

#include <stdio.h>

int main(){	
	
	float altura, peso;
	char sexo;
	
	printf("Informe o sexo - (M / F): ");
	scanf("%c", &sexo);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	if ((sexo == 'F') || (sexo == 'f')){
		peso = (62.1 * altura) - 44.7;
	}else{
		peso = (72.7 * altura) - 58;
	}
	
	printf("Seu sexo: %c \n", sexo);
	printf("Sua altura: %.2f \n", altura);
	printf("Seu peso ideal: %.2f \n", peso);
	
	return 0;
}