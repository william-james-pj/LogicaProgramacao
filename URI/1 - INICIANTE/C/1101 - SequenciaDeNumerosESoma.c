#include <stdio.h>

int main()
{
	int x = 0, soma, m,n, max, min, y;
	while(x == 0)
	{
		scanf(" %d %d", &m, &n);
		if(m > n)
		{
			max = m;
			min = n;
		}else{
			max = n;
			min = m;
		}
		soma = 0;
		if (m > 0 && n > 0)
		{	
			for(y = min; y <= max; y++){
				printf("%d ", y);
				soma += y;
			}	
			printf("Sum=%d\n",soma);
		}else{
			x = 1;
			break;
		}	
	}
	
	
	return 0;
}
