#include <stdio.h>
/**
 * main - computes a polinomial
 * Return: 0 on succuss
 */

int main(void)
{
	float x, poly;

	printf("Enter the value of x: ");
	scanf("%f", &x);

	poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("The value of the plynomial is: %.2f\n", poly);
	return (0);
}
