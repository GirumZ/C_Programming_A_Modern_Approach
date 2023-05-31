#include <stdio.h>
/**
 * main - calculates a tax amount
 * Return: 0 on success
 */

int main(void)
{
	float amount, tax, taxed;

	tax = 0.05f;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	taxed = amount + (amount * tax);
	printf("With tax added: %.2f\n", taxed);
	return (0);
}
