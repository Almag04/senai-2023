#include <stdio.h>
int main(){
	char mercadoria[20];
	float preco;
	int aumento = 5;
	float resultado;
    printf("nomeie a mercadoria:");
    scanf("%s" , &mercadoria);
    printf("defina seu preco:R$");
    scanf("%f" , &preco);
    resultado = (preco * aumento / 100)+ preco;
    printf("o novo preco de %s sera: R$%.2f", mercadoria, resultado);
    return 0;
    
	
}
