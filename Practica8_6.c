#include <stdio.h>
#include <stdbool.h>
int main(){
	int a;
	scanf("%d", &a);
	if (a)
		printf("Esta instrucción se ejecuta si a es diferente de 0\n");
	printf("Esta instrucción no pertenece al if\n");
	return 0;

}
