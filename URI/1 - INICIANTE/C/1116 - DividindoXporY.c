#include <stdio.h>

int main(){
	int x;
	float a, b;
	scanf(" %d", &x);
	while(x > 0){
		scanf(" %f %f", &a, &b);
		if(b == 0){
			printf("divisao impossivel\n");
		}else{
			printf("%.1f\n", a/b);
		}
		
		x--;
	}
	
	return 0;
}
