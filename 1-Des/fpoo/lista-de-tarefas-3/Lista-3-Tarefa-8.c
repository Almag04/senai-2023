#include <stdio.h>
int main(){
	int a, b, resultado;
	printf("digite um numero inteiro positivo:");
	scanf("%d" , &a);
	
	resultado = 1;
	for( b = 1; a >= b; b++){
		resultado *= b;
	}
	printf("%d", resultado);
}
