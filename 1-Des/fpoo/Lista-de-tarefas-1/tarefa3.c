#include <stdio.h>
int main(){
	char pessoa[10];
	float salario;
	float reajuste;
	float resultado;
	printf("nome da pessoa:");
	scanf("%s" , &pessoa);
	printf("seu salario:");
	scanf("%f" , &salario);
    printf("reajuste:");
    scanf("%f" , &reajuste);
    resultado = reajuste / 100 * salario + salario;
    printf("o novo salario sera: %.2f" , resultado);

	
	
}
	

