#include <stdio.h>

int main(){
	char op;
	double matriz[12][12], soma;
	int linhaCont, colunaCont, posicaoFinal = 0,cont = 0, teste = 1;
	scanf(" %c", &op);
	
	for(linhaCont = 0; linhaCont < 12; linhaCont++){
		for(colunaCont = 0; colunaCont < 12; colunaCont++){
			scanf(" %lf", &matriz[linhaCont][colunaCont]);
		}
	}
	for(linhaCont = 1; linhaCont < 11; linhaCont++){
		if(teste == 1){
			posicaoFinal += 1;
		}else{
			posicaoFinal -= 1;
		}
		if(posicaoFinal == 6){
			teste = 0;
			posicaoFinal = 5;
		}
		for(colunaCont = 0; colunaCont < posicaoFinal; colunaCont++){
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
