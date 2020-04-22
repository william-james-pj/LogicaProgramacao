#include <stdio.h>

int main(){
	int qtd, x, m2=0, m3=0, m4=0, m5=0;
	scanf(" %d", &qtd);
	int vetor[qtd];
	for(x = 0; x < qtd; x++){
		scanf(" %d", &vetor[x]);
		if(vetor[x] % 2 == 0){
			m2 += 1;
		}
		if(vetor[x] % 3 == 0){
			m3 += 1;
		}
		if(vetor[x] % 4 == 0){
			m4 += 1;
		}
		if(vetor[x] % 5 == 0){
			m5 += 1;
		}
	}
	printf("%d Multiplo(s) de 2\n",m2);
	printf("%d Multiplo(s) de 3\n",m3);
	printf("%d Multiplo(s) de 4\n",m4);
	printf("%d Multiplo(s) de 5\n",m5);
	
	return 0;
}
