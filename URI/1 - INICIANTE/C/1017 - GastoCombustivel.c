#include <stdio.h>

int main()
{
	float t, v;
	float l;
	scanf(" %f", &t);
	scanf(" %f", &v);
	
	l = (t*v)/12;
	
	printf("%.3f\n", l);
	
	return 0;
}
