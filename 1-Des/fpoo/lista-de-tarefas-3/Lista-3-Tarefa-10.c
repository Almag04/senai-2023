#include <stdio.h>
int main (){
	int num[10], a, b;
	printf("digite dez numeros inteiros:");
	for(a = 0; a <= 9; a++){
		scanf("%d", &num[a]);    
	}
	b = num[0];
	for(a = 0; a <= 9; a++){
			if(num[a] > b){
			b = num[a];	
			
			}	
	}
	printf("%d", b);
}
