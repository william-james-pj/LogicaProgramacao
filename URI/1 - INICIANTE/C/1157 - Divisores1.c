#include <stdio.h>

int main(){
	int y, num = 0;
	scanf(" %d", &num);
	for(y = 1; y <= num; y++){
		if(num % y == 0){
			printf("%d\n", y);
		}
	}
	return 0;
}
