#include <stdio.h>
#include <math.h>

int main(){
	int a,b,r,q, f;
	
	scanf(" %d %d", &a, &b);
	
	if(a > 0){
		r = a % abs(b);
		q = (int) a / b;
	}else{
		for(r = 0; r < abs(b); r++){
			f = a - r;
			if(f % b == 0){
				break;
			}
		}
        q = f / b;
	}
	printf("%d %d\n", q, r);
}

