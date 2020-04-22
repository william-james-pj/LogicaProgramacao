#include <stdio.h>

int main(){
	int x = 0, qtd, y, salto = 0, soma, cont, vetor[30];
	while (scanf("%d", &qtd) != EOF){
		for(y = 0; y < qtd; y++){
			scanf(" %d", &vetor[y]);
		}
		scanf(" %d", &salto);
		y = qtd - 1;
		soma = 0;
		while(y >= 0){
			soma += vetor[y];
			y -= salto;
		}
		cont = 0;
		for(y = 1; y <= soma; y++){
			if(soma % y == 0){
				cont ++;
			}
		}
		if(cont == 2){
			printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
		}else{
			printf("Bad boy! I’ll hit you.\n");
		}
	}
	return 0 ;
}

