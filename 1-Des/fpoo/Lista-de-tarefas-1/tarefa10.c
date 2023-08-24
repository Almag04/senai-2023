#include <stdio.h>
int main (){
	char cidade[15];
	int eleitores;
	int votos;
	printf("nomeie a cidade:");
	scanf("%s" , &cidade);
	printf("quantidade de eleitores");
	scanf("%d" , &eleitores);
	printf("total de votos:");
	scanf("%d" , &votos);
	float resultado = votos * 100 / eleitores;
	printf(" a porcentagem de participacao dos eleitores da cidade de %s foi de: %.2f%" , cidade, resultado);
	return 0;
	
}
