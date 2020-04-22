#include <stdio.h>

int main(){
	int n, y;
	scanf(" %d", &n);
	for(y = 0; y < n; y++){
		if(y == n-1){
			printf("Ho!\n");
		}
		else{
			printf("Ho ");
		}
	}
	
	return 0;
}
