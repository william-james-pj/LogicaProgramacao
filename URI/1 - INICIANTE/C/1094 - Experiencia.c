#include <stdio.h>

int main()
{
	int total = 0, z =0, x, qtd;
	float sapos = 0.0,ratos = 0.0, coelho = 0.0;
	char tipo;
	
	scanf(" %d", &x);
	
	while(z < x)
	{
		scanf(" %d %c", &qtd, &tipo);
		if(tipo == 'C')
		{
			coelho += qtd;
		}else if(tipo == 'R')
		{
			ratos += qtd;
		}else{
			sapos += qtd;
		}
		total += qtd;
		z++;
	}
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %.0f\n",coelho);
	printf("Total de ratos: %.0f\n",ratos);
	printf("Total de sapos: %.0f\n",sapos);
	printf("Percentual de coelhos: %.2f %%\n", (coelho*100.00)/total);
	printf("Percentual de ratos: %.2f %%\n", (ratos*100.00)/total);
	printf("Percentual de sapos: %.2f %%\n", (sapos*100.00)/total);
	
	return 0;
}
