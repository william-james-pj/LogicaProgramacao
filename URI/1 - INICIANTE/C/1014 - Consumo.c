#include <stdio.h>

int main()
{
	int x;
	float y, consumo;
	
	scanf(" %d", &x);
	scanf(" %f", &y);
	
	consumo = x / y;
	
	printf("%.3f km/l\n", consumo);
	return 0;
}
