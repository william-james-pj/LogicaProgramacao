#include <stdio.h>

int main()
{
	int x, vetor[10], y;
	
	for(x = 0; x < 10; x++)
	{
		scanf(" %d", &y);
		if(y > 0){
			vetor[x] = y;
		}else{
			vetor[x] = 1;
		}
	}
	for(x = 0; x < 10; x++){
		printf("X[%d] = %d\n", x, vetor[x]);
	}
	
	return 0;
}
