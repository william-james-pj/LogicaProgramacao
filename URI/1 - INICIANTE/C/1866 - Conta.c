#include <stdio.h>

int main(){
	int z, num, temp, s, y;
	scanf(" %d", &z);
	while(z > 0){
		s = 0;
		temp = 0;
		scanf(" %d", &num);
		for(y = 0; y < num; y++){
			if(temp == 0){
				s += 1;
				temp = 1;
			}else{
				s -= 1;
				temp = 0;
			}
		}
		printf("%d\n", s);
		z--;
	}
	return 0;
}
