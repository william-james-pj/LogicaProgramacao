#include <stdio.h>

int main()
{
	int g1, g2, w = 0, inter = 0, grenal = 0, gremio = 0, empates = 0, op;
	
	while(w == 0)
	{
		grenal += 1;
		scanf(" %d %d", &g1, &g2);
		if(g1 == g2)
		{
			empates +=1;
		}else if (g1 > g2){
			inter += 1;
		}else{
			gremio += 1;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf(" %d", &op);
		if(op == 2)
		{
			w = 1;
		}
	}
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empates);
	if(inter > gremio){
		printf("Inter venceu mais\n");
	}else{
		printf("Gremio venceu mais\n");
	}
	
	return 0;
}
