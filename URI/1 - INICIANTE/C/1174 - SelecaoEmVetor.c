#include <stdio.h>

int main(){
	int x;
	float vetor[100];
	
	for(x = 0; x < 100; x++){
		scanf(" %f", &vetor[x]);
	}
	for(x = 0; x < 100; x++){
		if(vetor[x] <= 10){
			printf("A[%d] = %.1f\n", x, vetor[x]);
		}
	}
		
	return 0;
}
