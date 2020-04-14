#include <stdio.h>

int main()
{
	int a, b;
	
	scanf(" %d %d", &a, &b);
	
	switch (a)
	{
		case 1:
			printf("Total: R$ %.2f\n", 4.0*b);
		break;
		case 2:
			printf("Total: R$ %.2f\n", 4.5*b);
		break;
		case 3:
			printf("Total: R$ %.2f\n", 5.0*b);
		break;
		case 4:
			printf("Total: R$ %.2f\n", 2.0*b);
		break;
		case 5:
			printf("Total: R$ %.2f\n", 1.5*b);
		break;
	}
	
	return 0;
}
