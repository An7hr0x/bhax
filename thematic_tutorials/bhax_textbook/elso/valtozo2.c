#include <stdio.h>

int main() {
	
	int a = 11;
	int b = 22;

	a=a+b;
	b=a-b;
	a=a-b;

	printf("A= %d B= %d \n",a,b );

	return 0;

	}
