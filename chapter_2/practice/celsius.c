#include <stdio.h>
/**
 * main - converts from fahrenhite to celsius
 * Return: 0 on success
 */

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0F / 9.0F)

int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temprature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.1f\n", celsius);
	return (0);
}


