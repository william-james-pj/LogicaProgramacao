#include <stdio.h>

int main()
{
	int x, tempo, i = 0;
	long pa, pb;
	double g1, g2;
	
	scanf(" %d", &x);
	
	while(i < x){
		scanf(" %ld %ld %lf %lf", &pa, &pb, &g1, &g2);
		tempo = 0;
		while(pa <= pb)
		{
			pa += (long)((pa*g1)/100);
			pb += (long)((pb*g2)/100);
			tempo += 1;
			if(tempo > 100)
			{
				tempo = 101;
				break;
			}
		}
		if(tempo == 101){
			printf("mais de um seculo.\n");
		}else{
			printf("%d anos.\n", tempo);
		}
		i+=1;
	}
	
	return 0;
}
