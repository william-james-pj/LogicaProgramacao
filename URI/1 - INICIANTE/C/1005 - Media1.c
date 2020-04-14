#include <stdio.h>

int main()
{
	double num1, num2, media;
	scanf(" %lf", &num1);
	scanf(" %lf", &num2);
	
	media = ((num1 * 3.5) + (num2 * 7.5)) / 11;
	printf("MEDIA = %.5lf\n", media);
	return 0;
}
