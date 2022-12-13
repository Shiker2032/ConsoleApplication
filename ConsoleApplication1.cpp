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

	// Восточный календарь

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

	// Восточный гороскоп

	if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
		printf(" zodiac: Aries");
	}
	else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
		printf(" zodiac: Bull");
	}
	else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
		printf(" zodiac: Twins");
	}
	else if ((month == 6 && day >= 22) || (month == 7 && day <= 22))
	{
		printf(" Zodiac: Crayfish");
	}
	else if ((month == 7 && day >= 23) || (month == 8 && day <= 23)) {
		printf(" Zodiac: Lion");
	}
	else if ((month == 8 && day >= 24) || (month == 9 && day <= 23)) {
		printf(" Zodiac: Maiden");
	}
	else if ((month == 9 && day >= 24) || (month == 10 && day <= 22))
	{
		printf(" Zodiac: Scales");
	}
	else if ((month == 10 && day >= 23) || (month == 11 && day <= 22))
	{
		printf(" Zodiac: Scorpion");
	}
	else if ((month == 11 && day >= 23) || (month == 12 && day <= 21))
	{
		printf(" Zodiac: Archer");
	}
	else if ((month == 12 && day >= 22) || (month == 1 && day <= 20))
	{
		printf(" Zodiac: Capricorn");
	}
	else if ((month == 1 && day >= 21) || (month == 2 && day <= 19)) {
		printf(" Zodiac: Aquarius");
	}
	else if ((month == 2 && day >= 20) || (month == 3 && day <= 20))
	{
		printf(" Zodiac: Fishes");
	}
}
