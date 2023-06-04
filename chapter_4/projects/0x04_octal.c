#include <stdio.h>
/**
 * main - converts a number from decimal to octal
 * Return: 0 on success
 */

int main(void)
{
	int num, first_dig, second_dig, third_dig, fourth_dig, fifth_dig;

	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &num);

	first_dig = num % 8;
	second_dig = (num /= 8) % 8;
	third_dig = (num /= 8) % 8;
	fourth_dig = (num /= 8) % 8;
	fifth_dig = (num /= 8) % 8;

	printf("%1d%1d%1d%1d%1d\n",
			fifth_dig, fourth_dig, third_dig, second_dig, first_dig);
	return (0);
}
