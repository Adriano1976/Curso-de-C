#include <stdio.h>

int main() {
	float num1, num2, resultado;
	int opcao;

	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Escolha a operacao: \n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n Opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			resultado = num1 + num2;
			printf("\nResultado da soma: %.3f", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("\nResultado da subtracao: %.3f", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("\nResultado da multiplicacao: %.3f", resultado);
			break;
		case 4:
			resultado = num1 / num2;
			printf("\nResultado da divisao: %.3f", resultado);
			break;
		default:
			printf("\nOpcao inválida.");
			break;
	}

	return (0);
}
