#include <stdio.h>
int main(){
	char time[10];
	int vitorias;
	int empates;
	int pontos;
	printf("nome do time:");
	scanf("%s" , &time);
	printf("numero de vitorias:");
	scanf("%d" , &vitorias);
	printf("numero de empates:");
	scanf("%d" , &empates);
	pontos = 3 * vitorias + empates;
	printf("o total de pontos do time e: %d" , pontos);
	return 0;
	
	
	
	

	
	
}
	

