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
	temp = 0;
	for(x = n2; x <= n1; x++)
	{
		if(x % 13 != 0)
		{
			temp += x;
		}		
	}
	printf("%d\n", temp);
	
	return 0;
}
