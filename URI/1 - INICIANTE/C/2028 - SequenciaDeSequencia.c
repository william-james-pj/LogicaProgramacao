#include <stdio.h>

int main(){
	int num, cont = 0, y, z, caso = 0;
	
	while(scanf(" %d", &num) != EOF){
		cont = 1;
		caso ++;
		for(y = 0; y < num+1; y++){
			for(z = 0; z < y; z++){
				cont++;
			}
		}
		if(cont == 1){
			printf("Caso %d: %d numero\n",caso , cont);
		}else{
			printf("Caso %d: %d numeros\n",caso , cont);
		}
		if(num == 0){
			printf("0\n");
		}else{
			printf("0 ");
		}
		for(y = 0; y < num+1; y++){
			for(z = 0; z < y; z++){
				if(y == num && z == num - 1){
					printf("%d\n", y);
				}else{
					printf("%d ", y);
				}
				
			}
		}
		printf("\n");
	}
	
	return 0;
}
