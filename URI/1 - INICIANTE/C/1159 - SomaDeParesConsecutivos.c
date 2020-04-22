#include <stdio.h>

int main(){
	int x = 0, num, cont, soma, zz;
	
	while(x == 0){
		scanf(" %d", &num);
		if(num == 0){
			break;
		}else{
			soma = 0;
			cont = 5;
			zz = num;
			while(cont > 0){
				if(zz % 2 == 0){
					soma += zz;
					cont--;
				}
				zz++;
			}
			printf("%d\n", soma);
		}
		
	}
	
	return 0;
}
