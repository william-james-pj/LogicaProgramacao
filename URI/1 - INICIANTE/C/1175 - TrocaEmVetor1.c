#include <stdio.h>

int main(){
	int x = 0, y, num, vetor[20], vetor1[20];
	for(x = 0; x < 20; x++){
		scanf(" %d", &vetor[x]);
		vetor1[19-x] = vetor[x];
	}
	for(x = 0; x < 20; x++){
		printf("N[%d] = %d\n", x, vetor1[x]);
	}
	return 0;
}
