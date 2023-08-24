#include <stdio.h>
int main(){
	int numero;
	int a;
	printf("digite um numero inteiro:");
	scanf("%d" , &numero);
	for(a = 0; a <= numero; a = a + 1){
		printf("%d\n", a);
	}
}
