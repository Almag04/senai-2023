#include <stdio.h>
int main(){
	int a, b;
	printf("digite um numero inteiro positivo:");
	scanf("%d" , &a);
	for( b = 1; b <= a; b += 2){
		printf("%d\n" , b);
	}
}
