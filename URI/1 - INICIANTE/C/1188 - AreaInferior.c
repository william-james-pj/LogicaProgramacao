#include <stdio.h>

int main(){
	char op;
	double matriz[12][12], soma;
	int linhaCont, colunaCont, posicaoInicial = 6, posicaoFinal = 6,cont = 0;
	scanf(" %c", &op);
	
	for(linhaCont = 0; linhaCont < 12; linhaCont++){
		for(colunaCont = 0; colunaCont < 12; colunaCont++){
			scanf(" %lf", &matriz[linhaCont][colunaCont]);
		}
	}
	for(linhaCont = 7; linhaCont < 12; linhaCont++){
		posicaoInicial -= 1;
		posicaoFinal += 1;
		for(colunaCont = posicaoInicial; colunaCont < posicaoFinal; colunaCont++){
			soma += matriz[linhaCont][colunaCont];
			cont += 1;
		}
	}
	if(op == 'S'){
		printf("%.1lf\n", soma);
	}else{
		printf("%.1lf\n", soma/cont);
	}
	
	return 0;
}
