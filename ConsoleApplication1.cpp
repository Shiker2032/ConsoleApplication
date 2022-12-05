#include <stdio.h>
#include <math.h>

int main() {

	int day, month, year;

	printf("input day");
	scanf_s("%i", &day);
	printf("input month");
	scanf_s("%i", &month);
	printf("input year");
	scanf_s("%i", &year);

	printf("%i %i %i ", day, month, year);

	//Високосный год

	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
		printf("Leap year ");
	}
	else {
		printf("Not leap year ");
	}

	// Китайский гороскоп

	int eastern = (year - 1936) % 12;

	switch (eastern) {
		case 0: {
			printf("Year of the rat");
			break;
		}
		case 1: {
			printf("Year of the bull");
			break;
		}
		case 2: {
			printf("Year of the tiger");
			break;
		}
		case 3: {
			printf("Year of the rabbit");
			break;
		}
		case 4: {
			printf("Year of the dragon");
			break;
		}
		case 5: {
			printf("Year of the snake");
			break;
		}
		case 6: {
			printf("Year of the horse");
			break;
		}
		case 7: {
			printf("Year of the sheep");
			break;
		}
		case 8: {
			printf("Year of the monkey");
			break;
		}
		case 9: {
			printf("Year of the rooster");
			break;
		}
		case 10: {
			printf("Year of the dog");
			break;
		}
		case 11: {
			printf("Year of the pig");
			break;
		}
		default: {
			printf("Year input error");
			break;	
		}
	}	
}
