#include <stdio.h>

int main()
{
	double a, b, c, d, e, f, media;
	int soma;
	
	scanf(" %lf", &a);
	scanf(" %lf", &b);
	scanf(" %lf", &c);
	scanf(" %lf", &d);
	scanf(" %lf", &e);
	scanf(" %lf", &f);
	
	if (a > 0.0){soma +=1; media += a;}
	if (b > 0.0){soma +=1; media += b;}
	if (c > 0.0){soma +=1; media += c;}
	if (d > 0.0){soma +=1; media += d;}
	if (e > 0.0){soma +=1; media += e;}
	if (f > 0.0){soma +=1; media += f;}
	
	printf("%d valores positivos\n", soma);	
	printf("%.1lf\n", media/soma);
	return 0;
}
