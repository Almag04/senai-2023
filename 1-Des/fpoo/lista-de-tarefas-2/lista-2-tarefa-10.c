#include <stdio.h>
int main (){
	int nota1, nota2, nota3;
	int media;
	printf("digite as tres notas do aluno:");
	scanf("%d %d %d" , &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3)/ 3;
	if(media >= 6){
		printf("a media do aluno e:%d, e ele foi aprovado!" , media);		
	}else if(media < 6 && media == 4){
		printf("a media do aluno e:%d, e ele ficou de recuperacao!" , media);
	}else if(media < 4){
		printf("a media do aluno e:%d, e ele foi reprovado!" , media);
	}	
	return 0;
}
