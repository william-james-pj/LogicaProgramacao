#include <stdio.h>

int main()
{
	int x, m;
	
	scanf(" %d", &m);
	
	for(x = 1; x <= 10; x ++)
	{
		printf("%d x %d = %d\n",x,m,x*m);
	}
	return 0;
}
