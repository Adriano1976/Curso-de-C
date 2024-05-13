
#include <stdio.h>
#include <stdlib.h>

// a) Crie uma estrutura com dois atributos: cor (cadeia de caracteres) e id (inteiro)
struct semafaro {
	char cor[10];
	int id;
};

// b) Crie três variáveis do tipo definido na estrutura
struct semafaro s1 = {"Vermelho", 1};
struct semafaro s2 = {"Amarelo", 2};
struct semafaro s3 = {"Verde", 3};

 // c) Crie um ponteiro do mesmo tipo
struct semafaro *ptr_s;

int main(){
	// d) Inicialize as estruturas com os valores fornecidos
	ptr_s = &s1;
	
	// f) Percorra a memória e imprima o valor de cada variável usando ponteiros
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
	ptr_s++;
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
	ptr_s++;
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
    
	system("Pause");	
	return(0);
}

