#include <stdio.h>

int main()
{
	int x = 0, n1, n2;
	
	while(x == 0)
	{
		scanf(" %d %d", &n1, &n2);
		if(n1 != n2)
		{
			if(n1 > n2)
			{
				printf("Decrescente\n");
			}else{
				printf("Crescente\n");
			}
		}else
		{
			x = 1;
			break;
		}
		
	}
	
	return 0;
}
