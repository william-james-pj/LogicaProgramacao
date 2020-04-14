#include <stdio.h>

int main()
{
	int n, h;
	float saH, salario;
	
	scanf(" %d", &n);
	scanf(" %d", &h);
	scanf(" %f", &saH);
	
	salario = h * saH;
	
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
}
