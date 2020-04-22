#include <stdio.h>

int main(){
	double vetor[100], metade, num;
	int x;
	scanf(" %lf", &num);
	vetor[0] = num;
	metade = num/2;
	for(x = 1; x < 100; x++){
		vetor[x] = metade;
		metade /= 2;
	}
	for(x = 0; x < 100; x++){
		printf("N[%d] = %.4f\n", x, vetor[x]);
	}
	
	return 0;
}
