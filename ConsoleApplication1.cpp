#include <stdio.h>
int main()
{	
	int a, b;

	printf("input pin1");
	scanf_s("%i", &pin1);
	printf("input pin2");
	scanf_s("%i", &pin2);

	if ((pin1 == 123) && (pin2 == 321)) {
		printf("Добро пожаловать user");
	}
	else {
		printf("Пользователь с таким логином или паролем не найден");
	}

	// Задача 2
	long int login, password;

	printf("input login");
	scanf_s("%ld", &login);
	printf("input password");
	scanf_s("%ld", &password);

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