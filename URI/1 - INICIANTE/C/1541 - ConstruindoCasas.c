#include <stdio.h>
#include <math.h>
int main(){
	int a = 0, b = 0, c = 0, z = 0, terreno;
	while(z == 0){
		scanf(" %d", &a);
		if(a == 0){
			z = 1;
			break;
		}else{
			scanf(" %d %d", &b, &c);
			terreno = sqrt((((a*b)*100)/c));
			printf("%d\n", terreno);
		}		
	}
	return 0;
}
