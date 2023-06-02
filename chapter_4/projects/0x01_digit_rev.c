#include <stdio.h>
/**
 * main - prints the reverse of a two digit number
 * Return: 0 on success
 */

int main(void)
{
	int num, first_dig, second_dig;

	printf("Enter a two-digit number: ");
	scanf("%2d", &num);

	first_dig = num / 10;
	second_dig = num % 10;

	printf("The revarsal is: %1d%1d\n", second_dig, first_dig);
	return (0);
}
