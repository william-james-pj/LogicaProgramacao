#include <stdio.h>

int main(){
	int n, y, temp, maxVelocidade;
	
	while(scanf(" %d", &n) == 1){
		maxVelocidade = 0;
		for(y = 0; y < n; y++){
			scanf(" %d", &temp);
			if(temp > maxVelocidade){
				maxVelocidade = temp;
			}
		}
		if(maxVelocidade < 10){
			printf("%d\n", 1);
		} else if(maxVelocidade >= 10 && maxVelocidade < 20){
			printf("%d\n", 2);
		} else{
			printf("%d\n", 3);
		}
	}
	
	
	return 0;
}
