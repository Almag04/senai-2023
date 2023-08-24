#include <stdio.h>
int main(){
	float salario;
	float aumento;
	printf("defina o salario do pessoa:");
	scanf("%f" , &salario);
	if(salario <= 1500 && salario < 1750){
		aumento = 15;
	}else if(salario <= 1750 &&  salario < 2000){
		aumento = 12;
	}else if(salario <=2000 && salario < 3000){
		aumento = 9;
	}else if(salario >= 3000){
	aumento = 6;
    }
  float resultado = aumento * salario / 100 + salario;
  printf("o salario com reajuste sera: %.2f" , resultado);
  return 0;
}
