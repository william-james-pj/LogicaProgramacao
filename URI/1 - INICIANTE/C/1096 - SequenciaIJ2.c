#include <stdio.h>

int main()
{
	int j = 7, i = 1;
	
	while ( i <= 9)
	{
		printf("I=%d J=%d\n",i,j);
		j -= 1;
		if (j < 5)
		{
			i += 2;
			j = 7;
		}
	}
	
	return 0;
}
