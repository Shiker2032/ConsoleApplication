#include <stdio.h>
int main()
{
	// Задача 1
	int pin1, pin2;

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

	if ((login == 1) && (password == 123)) {
		printf("Добро пожаловать user1");
	}
	else if ((login == 2) && (password == 321)) {
		printf("Добро пожаловать user2");
	}
	else {
		printf("Пользователь с таким логином или паролем не найден");
	}
}