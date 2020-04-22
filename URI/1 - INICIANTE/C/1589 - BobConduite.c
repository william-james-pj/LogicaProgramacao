#include <stdio.h>

int main(){
	int r1, r2, num;
	scanf(" %d", &num);
	while(num > 0){
		scanf(" %d %d", &r1, &r2);
		printf("%d\n", r1+r2);
		num--;
	}
	return 0;
}
