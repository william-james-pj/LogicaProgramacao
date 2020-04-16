#include <stdio.h>

int main ()
{
	int x, y, soma = 0, z, temp;
	
	scanf(" %d", &x);
	scanf(" %d", &y);
	if (x % 2 == 0)
	{
		for (z = x; z != y; z--)
		{
			if (z % 2 != 0)
			{
				soma += z;
			}
		}
	} else{

		for (z = x-1; z != y; z--)
		{
			if (z % 2 != 0)
			{
				soma += z;
			}
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}
