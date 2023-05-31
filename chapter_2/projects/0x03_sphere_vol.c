#include <stdio.h>

/**
 * main - computes the volume of a sphere
 * Return: 0 on success
 */

#define PI 3.141592

int main(void)
{
	float radius, volume;

	printf("Enter the radius of the sphere: ");
	scanf("%f", &radius);
	volume = (4.0f / 3.0f) * (PI) * (radius * radius * radius);

	printf("The volume of the sphere is: %f\n", volume);
	return (0);
}
