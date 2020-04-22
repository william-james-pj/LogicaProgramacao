#include <stdio.h>
#include <string.h>

int main(){
	int a, z;
	char p[30];
	scanf(" %d", &z);
	while(z > 0){
		scanf(" %s %d", p, &a);
		if(strcmp (p, "Thor") == 0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
		
		z--;
	}
	return 0;
}
