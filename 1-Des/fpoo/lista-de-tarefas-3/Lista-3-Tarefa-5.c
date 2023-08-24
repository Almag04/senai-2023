#include <stdio.h>
int main (){
	int a, b;
	printf("digite um numero inteiro positivo:");
	scanf("%d" , &a);
	for(b = 0; b <= a ; b = b + 2){
		printf("%d\n" , b);
	}
}
