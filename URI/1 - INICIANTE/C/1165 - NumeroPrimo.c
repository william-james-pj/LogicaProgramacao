#include <stdio.h>

int main()
{
	int x, y, num, div = 0;
	
	scanf(" %d", &x);
	
	while(x > 0){
		scanf(" %d", &num);
		div = 0;
		for(y = 1; y <= num; y++){
			if(num % y == 0){
				div+=1;
			}
		}
		if(div == 2){
			printf("%d eh primo\n", num);
		}else{
			printf("%d nao eh primo\n", num);
		}
		x--;
	}
	
	return 0;
}
