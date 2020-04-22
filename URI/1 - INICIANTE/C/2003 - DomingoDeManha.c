#include <stdio.h>

int main(){
	int h1, h2;
	while(scanf(" %d", &h1) == 1){
		scanf(":%d", &h2);
		h2 += 60;
		if(h2 > 60){
			h2 -= 60;
			h1 += 1;
		}
		if(h1 > 8){
			h2 += (h1-8) * 60;
			h1 -= h1-8;
		}
		if (h1 == 8){
			printf("Atraso maximo: %d\n", h2);
		}else{
			printf("Atraso maximo: 0\n");
		}
		
	}
	
	return 0;
}
