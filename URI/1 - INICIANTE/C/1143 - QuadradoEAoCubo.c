#include <stdio.h>

int main(){
	int x = 0, num = 0;
	scanf(" %d", &num);
	for(x = 1; x <= num; x++){
		printf("%d %d %d\n", x, x*x, x*x*x);
	}
	return 0;
}
