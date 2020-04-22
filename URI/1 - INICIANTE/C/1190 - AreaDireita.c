#include <stdio.h>

int main(){
	char op;
	double matriz[12][12], soma;
	int linhaCont, colunaCont, posicaoInicial = 12,cont = 0, teste = 1;
	scanf(" %c", &op);
	
	for(linhaCont = 0; linhaCont < 12; linhaCont++){
		for(colunaCont = 0; colunaCont < 12; colunaCont++){
			scanf(" %lf", &matriz[linhaCont][colunaCont]);
		}
	}
	for(linhaCont = 1; linhaCont < 11; linhaCont++){
		if(teste == 1){
			posicaoInicial -= 1;
		}else{
			posicaoInicial += 1;
		}
		if(posicaoInicial == 6){
			teste = 0;
			posicaoInicial = 7;
		}
		for(colunaCont = posicaoInicial; colunaCont < 12; colunaCont++){
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
