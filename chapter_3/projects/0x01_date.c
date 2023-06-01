#include <stdio.h>
/**
 * main - prints a date in a specific format
 * Return: 0 for success
 */

int main(void)
{
	int date, month, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);
	printf("You entered the date %.4d%.2d%.2d\n", year, month, date);

	return (0);
}
