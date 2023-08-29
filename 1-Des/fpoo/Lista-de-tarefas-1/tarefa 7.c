#include <stdio.h>
int main (){
	int caminhao = 18;
	int alqueire = 250;
	int fazenda;
	int caminhoes;
	printf("defina a quantidade de fazendas:");
	scanf("%d" , &fazenda);
	printf("defina a quantidade de caminhoes:");
	scanf("%d" ,  &caminhoes);
	int viagens = (alqueire * fazenda )/ (caminhao * caminhoes);
	printf("a quantidade de viagens sera: %d" , viagens);
	return 0;
	
	
	
}
