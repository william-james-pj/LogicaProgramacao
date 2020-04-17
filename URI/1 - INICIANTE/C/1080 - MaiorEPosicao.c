#include <stdio.h>

int main()
{
	int x = 1, num , max = 0, pos = 0;
	
	while (x <= 100)
	{
		scanf(" %d", &num);
		
		if(num > max)
		{
			max = num;
			pos = x;
		}
		x ++;
	}
	
	printf("%d\n", max);
	printf("%d\n", pos);
	return 0;
}
