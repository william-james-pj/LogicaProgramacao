# include <stdio.h>

int main()
{
	int x, y, a;
	
	scanf(" %d", &x);
	
	if(x % 2 == 0){a = 1;}
	else{a = 0;}
	y = x;
	while(a <= 6)
	{
		if(y % 2 != 0)
		{
			printf("%d\n", y);
			a += 1;
		}
		y += 1;
	}
	
	
	return 0;
}
