#include <stdio.h>
#include <stdbool.h>
int main(){
	int a, b, c; //Representan tres númeeros enteros.
	scanf("%d %d %d",&a, &b, &c);
	if (a > b){
		if(b > c){
			printf("%d<%d<%d\n",c,b,a);
		}else{
			if(a > c){
				printf("%d<%d<%d\n",b,c,a);
			}else{
				printf("%d<%d<%d\n",b,a,c);
			}
		}
	}else{
		if(a > c){
		        printf("%d<%d<%d\n",c,a,b);
		}else{
			if(b > c)
				printf("%d<%d<%d\n",a,c,b);
			else 
				printf("%d<%d<%d\n",a,b,c);
		}
	}
	return 0;
}
