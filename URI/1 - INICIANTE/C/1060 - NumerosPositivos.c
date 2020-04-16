#include <stdio.h>

int main()
{
	float a, b, c, d, e, f;
	int soma;
	
	scanf(" %f", &a);
	scanf(" %f", &b);
	scanf(" %f", &c);
	scanf(" %f", &d);
	scanf(" %f", &e);
	scanf(" %f", &f);
	
	if (a > 0){soma +=1;}
	if (b > 0){soma +=1;}
	if (c > 0){soma +=1;}
	if (d > 0){soma +=1;}
	if (e > 0){soma +=1;}
	if (f > 0){soma +=1;}
	
	printf("%d valores positivos\n", soma);	
	return 0;
}
