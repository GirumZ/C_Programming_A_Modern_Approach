#include <stdio.h>
/**
 * main - calculate the amount of change needed
 * Return: 0 on success
 */

int main(void)
{
	int dollar;

	printf("Enter the dollar amount: ");
	scanf("%d", &dollar);

	printf("$20 bills: %d\n", (dollar / 20));
	printf("$10 bills: %d\n", (dollar % 20) / 10);
	printf("$5 bills: %d\n", ((dollar % 20) % 10 / 5));
	printf("$1 bills: %d\n", (((dollar % 20) % 10) % 5));
	return (0);
}
