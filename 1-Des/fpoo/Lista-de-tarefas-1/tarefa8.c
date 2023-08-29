#include <stdio.h>
int main (){
	float pi = 3.14;
	float raio;
	float altura;
	float area;
	float volume;
	printf("defina o raio:");
	scanf("%f" , &raio);
	printf("defina a altura:");
	scanf("%f" , &altura);
	area = 2 * pi * raio * (raio +altura);
	printf("a area sera: %.2f" , area);
	volume = pi * (raio * raio) * altura;
	printf(" o volume sera: %.2f" , volume);
	return 0;	
 	
	
	
}
