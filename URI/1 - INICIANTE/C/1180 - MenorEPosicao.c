#include <stdio.h>

int main(){
	int x, y, menor, pos;
	scanf(" %d", &x);
	menor = 10000;
	int vetor[x];
	for(y = 0; y < x;y++){
		scanf(" %d", &vetor[y]);
		if(vetor[y] < menor){
			menor = vetor[y];
			pos = y;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
	return 0;
}
