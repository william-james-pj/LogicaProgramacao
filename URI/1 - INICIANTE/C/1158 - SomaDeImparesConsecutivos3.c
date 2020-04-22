#include <stdio.h>

int main(){
	int x, y, soma = 0, temp, zz, num;
	scanf(" %d", &num);
	while(num > 0){
		soma = 0;
		scanf(" %d %d", &x, &y);
		temp = y;
		zz = x;
		while(temp > 0){
			if(zz % 2 != 0){
				soma += zz;
				temp--;
			}
			zz++;
		}
		printf("%d\n", soma);
		num--;
	}
	
	return 0;
}
