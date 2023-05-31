#include <stdio.h>
/**
 * main - computes a polynoomial
 * Return: 0 on success
 */

int main(void)
{
	float x, poly;

	printf("Enter the value of x: ");
	scanf("%f", &x);

	poly = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5
		* (x * x * x) - (x * x) + 7 * (x) - 6;

	printf("The value of the plynomial is: %.2f\n", poly);
	return (0);
}
