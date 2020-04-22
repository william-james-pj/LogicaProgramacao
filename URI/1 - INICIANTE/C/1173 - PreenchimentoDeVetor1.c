#include <stdio.h>

int main(){
	int x = 0, num, vetor[10];
	scanf(" %d", &num);
	vetor[0] = num;
	for(x = 1; x < 10; x++){
		vetor[x] = vetor[x-1]*2;
	}
	for(x = 0; x < 10; x++){
		printf("N[%d] = %d\n", x, vetor[x]);
	}
	return 0;
}
