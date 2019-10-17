#include <stdio.h>
#include <math.h>
int main(){
	int x, mod;
	float fx;
	scanf("%d", &x);
	mod = x % 4;
	switch(mod){
		case 0:
			fx = x*x*x;
			break;
		case 1:
			fx = sqrt(x);
		break;
		case 2:
		fx = exp(x);
		break;
		case 3:
		fx = 1/x;
		break;
	}
	printf("%f\n", fx);
	return 0;
}





}
