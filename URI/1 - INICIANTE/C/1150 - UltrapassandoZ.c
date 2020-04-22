#include <stdio.h>

int main()
{
	int x, z, y,w, cont = 1;
	scanf(" %d", &x);
	w = 0;
	do{
		scanf(" %d", &z);
		if(z > x)
		{
			w = 1;
		}
	}while(w == 0);
	w = 0;
	y = x;
	do{
		if(x > z){
			w = 1;
		}else{
			x += y;
			y += 1;
			cont +=1;
		}
		
	}while(w == 0);
	printf("%d\n", cont);
	return 0;
}
