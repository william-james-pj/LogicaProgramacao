#include <stdio.h>

int main()
{
	int x = 0, z = 0, n1;
	float media = 0;
	while(z == 0)
	{
		scanf(" %d", &n1);
		if(n1 > 0){
			media += n1;
			x += 1;
		}else{
			z = 1;
		}
	}
	printf("%.2f\n", media/x);
	return 0;	
}
