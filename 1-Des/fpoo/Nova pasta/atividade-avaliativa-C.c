#include <stdio.h>
int main(){
	char cidade[10];
	int candidatos, votosBran, BranTotais, votosNul, NulTotais, votosTotais, i;
	

	printf("nome da cidade:");
	scanf("%s", &cidade);
	
	
	printf("informe o numero total de candidatos:");
	scanf("%d", &candidatos);
	
	
 	int votos[candidatos];
	char nomes[candidatos][10];
    
	for(i = 0; i < candidatos; i++){		
	printf("digite seus nomes:");
	
	
		scanf("%s", &nomes[i]);
		
	printf("digite seus votos respectivamente:");
	
		scanf("%d", &votos[i]);
		
		
	}
	int votosPorcen[candidatos];
	for( i = 0; i < candidatos; i++){
		
		votosPorcen[i] = votos[i] * 100 / votosTotais;
	 
	}
	printf("informe a quantidade total de votos brancos e nulos:");
	
	scanf("%d %d", &votosBran, &votosNul);
	
	printf("cidade de : %s\n", cidade);
	
	
	printf("candidato(a): %s", nomes[i]);
	printf("votos totais:", votosTotais);
	printf("porcentagem de voto:", votosPorcen);
	printf("votos brancos: %d votos nulos: %d", votosBran, votosNul);
	
	
	BranTotais = votosNul * 100 / BranTotais;
	return 0;
}

	
