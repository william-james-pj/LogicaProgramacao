#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, d;
	scanf(" %d %d %d %d", &a, &b, &c, &d);
	if(abs(b - c) < a && a < b + c && abs(a - c) < b && b < a + c && abs(b - a) < c && c < b + a){
		printf("S\n");
	}else if(abs(b - c) < d && d < b + c && abs(d - c) < b && b < d + c && abs(b - d) < c && c < b + d){
		printf("S\n");
	}else if(abs(d - c) < a && a < d + c && abs(a - c) < d && d < a + c && abs(d - a) < c && c < d + a){
		printf("S\n");
	}else if(abs(b - d) < a && a < b + d && abs(a - d) < b && b < a + d && abs(b - a) < d && d < b + a){
		printf("S\n");
	}else{
		printf("N\n");
	}
	return 0;
}
