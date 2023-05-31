#include <stdio.h>
/**
 * main - prints int and float in various formats
 * Return: 0 on success
 */

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return (0);
}
