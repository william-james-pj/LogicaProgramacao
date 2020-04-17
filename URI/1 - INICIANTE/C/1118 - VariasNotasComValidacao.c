#include <stdio.h>

int main()
{
	int w = 0, z = 0, op;
	float nota1, nota2;
	
	while(z == 0)
	{
		w = 0;
		while(w == 0)
		{
			scanf(" %f", &nota1);
			if(nota1 >= 0 && nota1 <= 10)
			{
				w = 1;
			}else {
				printf("nota invalida\n");
			}
		}
		w = 0;
		while(w == 0)
		{
			scanf(" %f", &nota2);
			if(nota2 >= 0 && nota2 <= 10)
			{
				w = 1;
			}else {
				printf("nota invalida\n");
			}
		}
		printf("media = %.2f\n",(nota1+nota2)/2);
		w = 0;
		while(w == 0)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf(" %d", &op);
			if(op == 1 || op == 2)
			{
				if(op == 2)
				{
					w =1;
					z =1;
					break;
				}
				w = 1;
			}
		}
	}

	
	return 0;
}
