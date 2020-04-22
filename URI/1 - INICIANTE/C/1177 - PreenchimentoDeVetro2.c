#include <stdio.h>

int main(){
	int x = 0, y, num, vetor[1000];
	scanf(" %d", &num);
	x = 0;
	for(y = 0; y < 1000; y++){
		if(x == num)
			x = 0;
		vetor[y] = x;
		x ++;		
	}
	for(y = 0; y < 1000; y++){
		printf("N[%d] = %d\n", y, vetor[y]);
	}
	return 0;
}
