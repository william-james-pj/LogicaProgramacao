#include <stdio.h>

int main(){
	int fatorial, num = 0;
	scanf(" %d", &num);
	fatorial = num;
	while(num > 1){
		fatorial *= num-1;
		num--;
	}
	printf("%d\n", fatorial);
	return 0;
}
