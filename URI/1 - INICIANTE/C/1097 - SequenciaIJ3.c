#include <stdio.h>

int main()
{
	int j = 7, i = 1, a = j;
	
	while ( i <= 9)
	{
		printf("I=%d J=%d\n",i,j);
		j -= 1;
		if (j < a -2)
		{
			i += 2;
			j = a + 2;
			a = j;
		}
	}
	
	return 0;
}
