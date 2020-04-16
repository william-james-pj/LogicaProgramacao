#include <stdio.h>

int main()
{
	int num, x, y;
	
	scanf(" %d", &x);
	for(y = 0; y < x; y++)
	{
		scanf(" %d", &num);
		if(num != 0)
		{
			if (num % 2 == 0)
			{
				printf("EVEN ");
			}
			else{
				printf("ODD ");
			}
			if (num > 0){
				printf("POSITIVE\n");
			}
			else{
				printf("NEGATIVE\n");
			}
		}else{
			printf("NULL\n");
		}
	}
	
	return 0;
}
