#include <stdio.h>
int main()
{	
	int a, b;

	printf("input a");
	scanf_s("%i", &a);
	printf("input b");
	scanf_s("%i", &b);

	if (a > b) {
		printf("A is bigger");
	}
	else if (a == b) {
		printf("Numbers are equal");
	} 
	else {
		printf("B is bigger");
	}
}