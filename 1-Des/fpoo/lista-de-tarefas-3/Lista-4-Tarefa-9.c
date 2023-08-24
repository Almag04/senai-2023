#include <stdio.h>
int main(){
	int num, resul, a;
	printf("digite um numero inteiro:");
	scanf("%d", &num);
	
	for(a = 0; a <= 10; a++ ){	
	resul = num * a;	
	printf("%d X %d = %d\n", num, a, resul);
	}
	
}
