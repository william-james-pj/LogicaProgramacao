#include <stdio.h>

int main()
{
	int x, y;
	
	scanf(" %d", &x);
	
	for(y=1;y<=x;y++)
	{
		if(y % 2 == 0)
		{
			printf("%d^2 = %d\n",y,y*y);
		}
	}
	
	return 0;
}
