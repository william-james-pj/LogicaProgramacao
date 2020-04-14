#include <stdio.h>

int main()
{
	int num[3], x;
	
	scanf(" %d %d %d", &num[0], &num[1], &num[2]);
	if((num[0] < num[1]) && (num[1] < num[2]))
	{
		printf("%d\n", num[0]);
		printf("%d\n", num[1]);
		printf("%d\n", num[2]);
	} else if((num[0] < num[2]) && (num[2] < num[1]))
	{
		printf("%d\n", num[0]);
		printf("%d\n", num[2]);
		printf("%d\n", num[1]);
	} else if((num[1] < num[2]) && (num[2] < num[0]))
	{
		printf("%d\n", num[1]);
		printf("%d\n", num[2]);
		printf("%d\n", num[0]);
	} else if((num[1] < num[0]) && (num[0] < num[2]))
	{
		printf("%d\n", num[1]);
		printf("%d\n", num[0]);
		printf("%d\n", num[2]);
	}else if((num[2] < num[1]) && (num[1] < num[0]))
	{
		printf("%d\n", num[2]);
		printf("%d\n", num[1]);
		printf("%d\n", num[0]);
	}
	else if((num[2] < num[0]) && (num[0] < num[1]))
	{
		printf("%d\n", num[2]);
		printf("%d\n", num[0]);
		printf("%d\n", num[1]);
	}
	printf("\n");
	for(x = 0; x <3; x++)
	{
		printf("%d\n", num[x]);
	}	
	return 0;
}
