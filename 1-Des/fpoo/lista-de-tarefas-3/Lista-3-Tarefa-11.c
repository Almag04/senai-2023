#include <stdio.h>
int main(){
	int num[5], a, b, c;
	printf("escreva cinco numeros inteiros:");
	for(a = 0; a < 5; a++){
		scanf("%d", &num[a]);
	}
	for(c = 0; c < 5; c++){
		for(a = 0; a < 4; a++){
		if(num[a] > num[a + 1]){
			b = num[a + 1];
			num[a + 1] = num[a];
			num[a] = b;
		}
		}	
	}
	for(a = 0; a < 5; a++){
   	printf("\n%d", num[a]);
   }
}
