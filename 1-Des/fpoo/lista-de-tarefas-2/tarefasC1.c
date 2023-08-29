#include <stdio.h>
int main () {
	float salario;
	int filhos;
	int reajuste = 45;
	int resultado;
	printf("defina o salario:");
	scanf("%f" , &salario);
	printf("defina o numero de filhos:");
	scanf("%d" , &filhos);
	resultado = salario + reajuste * filhos;
	if (salario < 2000){
		printf("o salario com reajuste sera:%d" , resultado);	
	}	else if(salario > 2000){
	    printf("o salario nao tera reajuste.");
	}
	return 0;
}
