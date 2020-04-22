#include <stdio.h>

int main(){
	int x = 0, tipo, gasolina = 0, alcool = 0, diesel = 0;
	
	while(x == 0){
		scanf(" %d", &tipo);
		if(tipo == 1){
			alcool ++;
		}else if(tipo == 2){
			gasolina++;
		}else if(tipo == 3){
			diesel++;
		}else if(tipo == 4){
			break;	
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	
	return 0;
}
