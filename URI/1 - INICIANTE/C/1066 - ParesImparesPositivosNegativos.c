#include <stdio.h>

int main()
{
	int x = 0, par = 0, impar = 0, negativo = 0, positivo = 0, num;
	
	while (x < 5)
	{
		scanf(" %d", &num);
		if (num > 0){positivo += 1;}
		if (num < 0){negativo += 1;}
		if (num % 2 == 0){par += 1;}
		if (num % 2 != 0){impar += 1;}
		x ++;
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0;
}
