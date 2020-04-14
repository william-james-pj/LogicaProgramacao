#include <stdio.h>

int main()
{
	int a,b,c,d,diferenca;
	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);
	scanf(" %d", &d);
	
	diferenca = (a * b - d * c);
	
	printf("DIFERENCA = %d\n", diferenca);
	return 0;
}
