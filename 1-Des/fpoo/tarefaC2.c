#include <stdio.h>
int main (){	
	float salario;
	float inss;
	float resultado;	
	printf("defina o salario:");
	scanf("%f" , &salario);
	if(salario == 1212){
		inss = 7.5;
	}else if(salario <= 2427.35 || salario > 2427.35){
		inss = 9;
    }else if(salario <= 3641.03 || salario > 3641.03){
		inss = 12;
	}else if(salario >= 7087.22){
		inss = 14;
	}
	resultado = salario - salario / 100 * inss;
    printf("o salario com desconto sera de:%.2f" , resultado);
	return 0;
}
