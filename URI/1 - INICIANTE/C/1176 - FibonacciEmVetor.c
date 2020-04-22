#include <stdio.h>

int main(){
	int x, num;
	unsigned long long int vetor[60], n1, n2, n3;
	n1 = 0;
	n2 = 1;
	vetor[0] = 0;
	for(x = 1; x < 60; x++){
			vetor[x] = n2;
			n3 = n2;
			n2 = n1 + n2;
			n1 = n3;
	}	
	scanf(" %d", &num);
	while(num > 0){
		scanf(" %d", &x);
		printf("Fib(%d) = %lld\n", x, vetor[x]);
		num--;
	}	
	return 0;
}
