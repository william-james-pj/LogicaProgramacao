#include <stdio.h>

int main()
{
	int x, z = 0, y;
	
	while(z == 0)
	{
		scanf(" %d", &x);
		if(x != 0)
		{
			for(y = 1; y <= x; y++)
			{
				if(y <= x-1)
				{
					printf("%d ", y);
				}else{
					printf("%d\n", y);
				}
			}
		}else{
			z = 1;
			break;
		}
	}
	
	return 0;
}
