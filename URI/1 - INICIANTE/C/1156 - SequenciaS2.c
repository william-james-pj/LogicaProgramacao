#include <stdio.h>

int main()
{
	float s = 0, z = 1, y =1;
	while(y <= 39){
		s += y / z;
		y += 2;
		z *= 2;
	} 
	printf("%.2f\n",s);
	return 0;
}
