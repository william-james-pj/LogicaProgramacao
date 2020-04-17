#include <stdio.h>

int main()
{
	float n1, n2, n3;
	int x, y = 0;
	
	scanf(" %d", &x);
	
	while(y < x)
	{
		scanf(" %f %f %f", &n1, &n2, &n3);
		printf("%.1f\n",(n1 * 2 + n2 * 3 + n3 * 5)/10);
		
		y++;
	}
	
	
	return 0;
}
