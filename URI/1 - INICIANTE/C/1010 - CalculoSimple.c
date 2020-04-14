#include <stdio.h>

int main()
{
	int x, codigo[2], numero[2];
	float valor[2], valorTotal;
	for(x = 0; x < 2; x++)
	{
		scanf(" %d %d %f", &codigo[x], &numero[x], &valor[x]);
		
		valorTotal += (valor[x] * numero[x]);
	}
	
	printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
	return 0;	
}
