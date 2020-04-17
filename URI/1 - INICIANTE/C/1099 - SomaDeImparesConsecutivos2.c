#include <stdio.h>

int main()
{
	int x, y =0, n1, n2, temp, z;
	
	scanf(" %d", &x);
	
	while(y < x)
	{
		scanf(" %d %d", &n1, &n2);
		if(n2 > n1)
		{
			temp = n1;
			n1 = n2;
			n2 = temp;
		}
		temp = 0;
		for(z = n2+1; z < n1; z++)
		{
			if(z % 2 != 0)
			{
				temp += z;
			}
		}
		printf("%d\n", temp);	
		y++;
	}
	
	return 0;
}
