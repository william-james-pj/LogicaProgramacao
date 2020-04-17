#include <stdio.h>

int main()
{
	int s, x = 0;
	while(x==0)
	{
		scanf(" %d", &s);
		if(s == 2002)
		{
			printf("Acesso Permitido\n");
			x = 1;
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	
	return 0;
}
