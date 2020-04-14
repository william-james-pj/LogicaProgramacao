#include <stdio.h>

int main()
{
	float lista[3], maior;
	int x, y = 1;
	scanf(" %f %f %f", &lista[0], &lista[1], &lista[2]);
	
	for (x=0;x<3;x++)
	{
		if(maior < lista[x])
		{
			maior = lista[x];
		}
	}
	if((maior == lista[0]))
	{
		if(maior < (lista[1] + lista[2]))
		{
			y =2;
		}
	}else if((maior == lista[1]))
	{
		if(maior < (lista[0] + lista[2]))
		{
			y =2;
		}	
	}else if((maior == lista[2]))
	{
		if(maior < (lista[0] + lista[1]))
		{
			y =2;
		}	
	}
	
	if(y == 2)
	{
		printf("Perimetro = %.1f\n", lista[0]+lista[1]+lista[2]);
	}else 
	{
		printf("Area = %.1f\n",((lista[0]+lista[1])*lista[2])/2);
	}
	
	return 0;
}
