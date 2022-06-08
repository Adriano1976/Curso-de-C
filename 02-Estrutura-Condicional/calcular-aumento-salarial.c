/*
- Elabore um programa que receba o salário de um funcionário e o código do
cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a
seguir apresenta os cargos.

Cód.-	Cargo					-	Percentual do aumento
1	-	Servente				-	40%
2	-	Pedreiro				-	35%
3	-	Mestre de obras			-	20%
4 	-	Técnico de segurança	-	10%
*/

#include <stdio.h>

int main(){
	
	int cargo;
	float salario, aumento, salario_final;
	
	printf("Codigo do cargo do funcionario:\n1 - Servente\n2 - Pedreiro\n3 - Mestre de Obras\n4 - Tecnico de Seguranca\n");
	printf("\nDigite o codigo: ");
	scanf("%d", &cargo);
	printf("Digite o salario: R$ ");
	scanf("%f", &salario);
	
	switch (cargo){
		
		case 1:
			aumento = salario * 0.4;
			salario_final = salario + aumento;
			printf("\nO Servente teve aumento de R$ %.2f e agora recebe R$ %.2f", aumento, salario_final);
			break;
		case 2:
			aumento = salario * 0.35;
			salario_final = salario + aumento;
			printf("\nO Pedreiro teve aumento de R$ %.2f e agora recebe R$ %.2f", aumento, salario_final);
			break;
		case 3:
			aumento = salario * 0.20;
			salario_final = salario + aumento;
			printf("\nO Mestre de Obras teve aumento de R$ %.2f e agora recebe R$ %.2f", aumento, salario_final);
			break;
		case 4:
			aumento = salario * 0.10;
			salario_final = salario + aumento;
			printf("\nO Tecnico de Seguranca teve aumento de R$ %.2f e agora recebe R$ %.2f", aumento, salario_final);
			break;
		default:
			printf("\nCodigo do cargo invalido.");
			break;
	}
}