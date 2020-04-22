#include <stdio.h>

int main(){
	char op;
	double matriz[12][12], soma;
	int linhaCont, colunaCont, x = 12,cont = 0;
	scanf(" %c", &op);
	
	for(linhaCont = 0; linhaCont < 12; linhaCont++){
		for(colunaCont = 0; colunaCont < 12; colunaCont++){
			scanf(" %lf", &matriz[linhaCont][colunaCont]);
		}
	}
	for(linhaCont = 0; linhaCont < 11; linhaCont++){
		x -= 1;
		for(colunaCont = 0; colunaCont < x; colunaCont++){
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
