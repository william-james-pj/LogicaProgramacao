#include <stdio.h>

int main()
{
	int x, z, n1 = 0, n2 = 1, n3;
	scanf(" %d", &x);
	printf("0 ");
	for(z = 0; z < x-1; z++){
		if(z != x-2)
		{
			printf("%d ", n2);
		}else{
			printf("%d\n", n2);
		}
		n3 = n2;
		n2 = n1 + n2;
		n1 = n3;
	}

	return 0;	
}
