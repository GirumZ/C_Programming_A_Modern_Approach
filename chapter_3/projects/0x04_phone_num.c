#include <stdio.h>
/**
 * main - prints a phone number in a specific format
 * Return: 0 on success
 */

int main(void)
{
	/**
	 * group1 will be the first three digits,
	 * group2 will be th next three and
	 * group4 will be the rest of the digits
	 */
	int group1, group2, group3;

	printf("Enter phone number[(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &group1, &group2, &group3);

	printf("You entered %d.%d.%d\n", group1, group2, group3);

	return (0);
}
