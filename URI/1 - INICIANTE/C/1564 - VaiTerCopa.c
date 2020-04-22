#include <stdio.h>

int main(){
	int a ;
	
	while(scanf(" %d", &a) != EOF){
		if(a == 0){
			printf("vai ter copa!\n");
		}else{
			printf("Vai ter duas copas!\n");
		}
	}
	
	return 0;
}
