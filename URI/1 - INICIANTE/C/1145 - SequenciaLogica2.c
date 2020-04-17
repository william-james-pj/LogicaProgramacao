#include <stdio.h>

int main()
{
	int w,z, x,y;
	
	scanf(" %d %d", &x, &y);
	
	for(z = 1; z<y;z+=x){
		for(w = 0; w < x; w++)
		{
			if(z+w <= y)
			{
				if(w != x-1)
				{
					printf("%d ",z+w);
				}else{
					printf("%d\n",z+w);
				}
			}

		}
	}
	

	
	return 0;
}
