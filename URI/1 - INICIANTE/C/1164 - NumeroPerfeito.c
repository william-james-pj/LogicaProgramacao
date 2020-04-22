#include <stdio.h>

int main(){
	int x = 0, num, cont, soma, z;
	scanf(" %d", &z);
	while(z > 0){
		scanf(" %d", &num);
		soma = 0;
		for(cont = 1; cont < num; cont++){
			if(num % cont == 0){
				soma += cont;
			}
		}
		if(soma == num){
			printf("%d eh perfeito\n", num);
		}else{
			printf("%d nao eh perfeito\n", num);
		}
		z --;		
	}
	
	return 0;
}
