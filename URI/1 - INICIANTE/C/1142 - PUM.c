#include <stdio.h>

int main(){
	int x = 0, num = 0;
	scanf(" %d", &num);
	for(x = 1; x < (num * 4) + 1; x++){
		if(x % 4 == 0){
			printf("PUM\n");
		}else{
			printf("%d ", x);
		}
	}
	
	return 0;
}
