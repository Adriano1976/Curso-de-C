/* O problema consiste em elaborar um cadastro para 20 livros, 
contendo as seguintes informa��es: c�digo, t�tulo, autor, �rea, 
ano e editora. Desenvolver um menu com as seguintes op��es:
1. Cadastrar os livros.
2. Imprimir as informa��es dos livros.
3. Pesquisar livros por c�digo.
4. Ordenar os livros por ano.
5. Sair do programa. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

# define TAM 20

struct livro{
	int codigo;
	char titulo[50];
	char autor[30];
	char area[30];
	int ano;
	char editora[30];
};

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	struct livro ficha[TAM];
	struct livro troca;
	int busca, i, j, acha, opcao;
	
	opcao = 0;
	while (opcao != 5) /* Op��o para sair do programa */
	{
		printf("1 - Cadastrar os livros\n");
		printf("2 - Imprimir os livros cadastrados\n");
		printf("3 - Pesquisar livros por c�digo\n");
		printf("4 - Ordenar os livros por ano\n");
		printf("5 - Sair\n");
		printf("Digite a op��o desejada: ");
		scanf("%d", &opcao);
		fflush(stdin);		
		
		if (opcao == 1) /* Op��o para cadastrar os livros */
		{ 
			system("cls");
			printf("\nFICHA DE CADASTRO DOS LIVROS\n");
			for (i = 0; i < TAM; i++)
			{
				printf("\n-------- Cadastro %d --------\n", i + 1);
				printf("C�digo: ");
				scanf("%d", &ficha[i].codigo);
				fflush(stdin);
				printf("T�tulo: ");
				scanf("%50[^\n]s", &ficha[i].titulo);
				fflush(stdin);
				printf("Autor(a): ");
				scanf("%30[^\n]s", &ficha[i].autor);
				fflush(stdin);
				printf("�rea: ");
				scanf("%30[^\n]s", &ficha[i].area);
				fflush(stdin);
				printf("Ano: ");
				scanf("%d", &ficha[i].ano);
				fflush(stdin);
				printf("Editora: ");
				scanf("%30[^\n]s", &ficha[i].editora);
				fflush(stdin);									
			}				
			system("cls");	
		} 
		else 
		{
		 	if (opcao == 2) /* Op��o para imprimir os livros cadastrado */
			 { 
				system("cls");
				printf("\n\n-- LISTA DOS LIVROS CADASTRADO --\n\n");
				for (i = 0; i < TAM; i++)
				{					
					printf(" - C�DIGO: %d\n", ficha[i].codigo);
					printf(" - T�TULO: %s\n", ficha[i].titulo);
					printf(" - AUTOR: %s\n", ficha[i].autor);
					printf(" - �REA: %s\n", ficha[i].area);
					printf(" - ANO: %d\n", ficha[i].ano);
					printf(" - EDITORA: %s\n\n", ficha[i].editora);								
				}
				system("pause");
				system("cls");
			} 
			else 
			{
				if (opcao == 3) /* Op��o para pesquisar livros por c�digo */
				{
					system("cls");
					printf("Digite o c�digo que deseja buscar: ");
					scanf("%d", &busca);
					i = 0;
					acha = 0;
					while (( i < TAM) && (acha == 0))
					{
						if (ficha[i].codigo == busca) 
							acha = 1;
						else
							i++;
					}
					if (acha == 1)
					{
						printf("\n\n-- LIVRO ENCONTRADO NA BUSCA --\n\n");
						printf(" - C�DIGO: %d\n", ficha[i].codigo);
						printf(" - T�TULO: %s\n", ficha[i].titulo);
						printf(" - AUTOR: %s\n", ficha[i].autor);
						printf(" - �REA: %s\n", ficha[i].area);
						printf(" - ANO: %d\n", ficha[i].ano);
						printf(" - EDITORA: %s\n\n", ficha[i].editora);
					}
					system("pause");
					system("cls");					
				} 				
				else 
				{
					if (opcao == 4) /* Op��o para ordenar os livros por ano */
					{
						system("cls");
						printf("\n\n-- ORDENANDO OS LIVROS CADASTRADO --\n\n");
						for (i = 0; i < TAM; i++)
						{
							for (j = i + 1; j < TAM; j++)
							{
								if (ficha[i].ano > ficha[j].ano)
								{
									troca = ficha[i];
									ficha[i] = ficha[j];
									ficha[j] = troca;
								}
							}
						}
						for (i = 0; i < TAM; i++)
						{
							printf("C�DIGO: %d, T�TULO: %s, ANO: %d\n", ficha[i].codigo, ficha[i].titulo, ficha[i].ano);
						}						
					}
					system("pause");
					system("cls");
				}				
			}
		}
	}	
	
	return (0);
}