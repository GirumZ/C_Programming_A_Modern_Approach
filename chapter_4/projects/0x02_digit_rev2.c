#include <stdio.h>
/**
 * main - prints a three digit number in reverse
 * Return: 0 on success
 */

int main(void)
{
	int num, first_dig, second_dig, third_dig;

	printf("Enter a three-digit number: ");
	scanf("%3d", &num);

	first_dig = num / 100;
	second_dig = (num % 100) / 10;
	third_dig = (num % 10);

	printf("The reversal is: %d%d%d\n", third_dig, second_dig, first_dig);

	return (0);
}
