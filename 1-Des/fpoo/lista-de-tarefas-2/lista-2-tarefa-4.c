#include <stdio.h>
int main (){
	int a;
	int b;
	int c;
	printf("defina o valor do lado A:");
	scanf("%d" , &a);
	printf("defina o valor do lado B:");
	scanf("%d" , &b);
	printf("defina o valor do lado c:");
	scanf("%d" , &c);
	if(a != b && b!= c){
		printf("este e um triangulo escaleno.");
	}else if(a == b && b == c){
		printf("este e um triangulo equilatero.");
	}else if(a == b && b != c){
		printf("este e um triangulo isosceles.");
	}
	return 0;
	
}
