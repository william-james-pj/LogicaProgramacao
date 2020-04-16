#include <stdio.h>

int main()
{
	int x, y, dentro = 0, fora = 0, num;
	
	scanf(" %d", &x);
	
	for(y = 0; y < x; y++)
	{
		scanf(" %d", &num);
		
		if(num >= 10 && num <= 20){dentro += 1;}
		else{fora += 1;}
	}
	printf("%d in\n", dentro);
	printf("%d out\n", fora);
	return 0;
}
