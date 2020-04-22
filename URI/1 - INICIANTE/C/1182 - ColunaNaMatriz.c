#include <stdio.h>

int main(){
	double matriz[12][12], soma = 0;
	char op;
	int x, linha = 0, y;
	scanf(" %d", &linha);
	scanf(" %c", &op);
	for(x = 0; x < 12; x++){
		for(y=0;y < 12; y++){
			scanf(" %lf", &matriz[x][y]);
		}
	}
	for(x = 0; x < 12; x++){
		soma += matriz[x][linha];
	}
	if(op == 'S'){
		printf("%.1lf\n", soma);
	}else{
		printf("%.1lf\n", soma/12);
	}
	return 0;
}
