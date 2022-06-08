/*
- Faça um programa que receba o código do estado de origem da carga de um caminhão, 
o peso da carga em toneladas e o código dela.
- Calcule e apresente: o peso da carga em quilos, o preço da carga, o valor do imposto
e o valor total da carga (preço da carga mais imposto).
*/

#include <stdio.h>

int main(){
	
	int cod_Estado, peso, cod_Carga;
	float imposto, taxa_imp, preco, preco_quilo;
	float total;
	
	printf("Digite o codigo do Estado [1 - 4]: ");
	scanf("%d", &cod_Estado);
	printf("Digite o peso da carga em toneladas: ");
	scanf("%d", &peso);
	printf("Digite o codigo da carga [10 - 40]: ");
	scanf("%d", &cod_Carga);
	
	switch (cod_Estado){
		case 1:
			taxa_imp = 0.2;
			break;
		case 2:
			taxa_imp = 0.15;
			break;
		case 3:
			taxa_imp = 0.1;
			break;
		case 4:
			taxa_imp = 0.05;
			break;
		default:
			taxa_imp = 0;
			printf("\nCodigo de estado invalido.");
			break;
	}
	
	if (cod_Carga >= 10 && cod_Carga <= 20){
		preco_quilo = 180;
	} else if (cod_Carga >= 21 && cod_Carga <= 30){
		preco_quilo = 120;
	} else if (cod_Carga >= 31 && cod_Carga <= 40){
		preco_quilo = 230;
	} else {
		printf("\nCodigo de carga invalido.");
		preco_quilo = 0;
	}
	
	imposto = peso * 1000 * preco_quilo * taxa_imp;
	preco = peso * 1000 * preco_quilo;
	total = preco + imposto;
	
	printf("\nPeso em kg: %d\nPreco: R$ %.2f\nImposto: R$ %.2f\nTotal: R$ %.2f\n", peso * 1000, preco, imposto, total);
	
	return (0);
}