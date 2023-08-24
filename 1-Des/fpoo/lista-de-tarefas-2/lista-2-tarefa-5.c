#include <stdio.h>
int main(){
	char mercadoria [10];
	float preco;
	float aumento;
	float resultado;
	printf("nome da mercadoria:");
	scanf("%s" , &mercadoria);
	printf("seu preco:");
	scanf("%f" , &preco);	
	if(preco < 1000){
		aumento = 5;		
	}else if(preco >= 1000){
		aumento = 7;		
	}
	resultado = aumento * preco / 100 + preco;	
	printf("o preco de %s com aumento sera: %.2f" , mercadoria, resultado);
	return 0;
	
}
