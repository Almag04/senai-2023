#include <stdio.h>
int main (){
	float velocidade;
	float distancia;
	float horas;
	printf("defina a distancia:");
	scanf("%f" , &distancia);
	printf("defina a velocidade:");
	scanf("%f" , &velocidade);
	horas = distancia / velocidade;
	printf("as horas necessarias serao: %.2f \n" , horas);
	return 0;
}
