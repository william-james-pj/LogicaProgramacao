#include <stdio.h>

int main()
{
	int n1, n2, temp, x;
	
	scanf(" %d", &n1);
	scanf(" %d", &n2);
	if(n2 > n1)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for(x = n2+1; x < n1; x++)
	{
		if(x % 5 == 2 || x % 5 == 3)
		{
			printf("%d\n", x);
		}		
	}

	
	return 0;
}
