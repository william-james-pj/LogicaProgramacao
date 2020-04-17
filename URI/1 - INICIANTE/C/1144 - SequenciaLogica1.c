#include <stdio.h>

int main()
{
	int i = 1, num;
	
	scanf(" %d", &num);
	
	while (i <= num){
		printf("%d %d %d\n",i,i*i,i*i*i);
		printf("%d %d %d\n",i,i*i+1,i*i*i+1);
		
		i++;
	}

	
	return 0;
}
