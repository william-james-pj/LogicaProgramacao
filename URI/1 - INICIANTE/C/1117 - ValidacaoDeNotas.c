#include <stdio.h>

int main(){
	int x = 0;
	float nota, media;
	while(x != 2){
		scanf(" %f", &nota);
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
		}else{
			media += nota;
			x ++;
		}
	}
	printf("media = %.2f\n", media/2);
	
	return 0;
}
