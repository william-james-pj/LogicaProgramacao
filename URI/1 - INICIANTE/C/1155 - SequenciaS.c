#include <stdio.h>

int main()
{
	int x = 0 ;
	float s = 0;
	for(x = 1; x <= 100; x++)
	{
		s += (float) 1/x;
	}
	printf("%.2f\n", s);
	return 0;	
}
