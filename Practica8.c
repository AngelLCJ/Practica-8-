#include <stdio.h>
int main(){
	int num1, num2;
	printf("Ingresa dos números\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 < num2)
		printf("El primer número %d es menor que el segundo %d\n", num1, num2);
	return 0;

}
