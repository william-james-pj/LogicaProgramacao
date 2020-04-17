#include <stdio.h>

int main()
{
	float j = 1, i = 0, a = 0.2;
	int x, b = 1, y;
	while ( i <= 1.9)
	{	
		for(x = 0; x < 3; x++)
		{
			if(i == 0.0 || i == 1.0)
			{
				printf("I=%.0f J=%.0f\n", i, j);
			}else
			{
				printf("I=%.1f J=%.1f\n", i, j);
			}
			j += 1;
		}	
		i += 0.2;
		j = b + a;
		a += 0.2;
		if (a > 8)
		{
			a = 0.2;
			b += 1;
		}
				
	}
	for(x=3; x<=5; x++) {
		printf("I=2 J=%d\n",x);
	}
	
	return 0;
}
