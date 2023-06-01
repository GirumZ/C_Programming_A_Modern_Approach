#include <stdio.h>
/**
 * main - breaks doun and prints an ISBN entered by a user
 * Return: 0 on success
 */

int main(void)
{
	int group1, group2, group3, group4, group5;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &group1, &group2, &group3, &group4, &group5);
	printf("GS1 prefix: %d\n", group1);
	printf("Group identifier: %d\n", group2);
	printf("Publisher code: %d\n", group3);
	printf("Item number: %d\n", group4);
	printf("Check digit: %d\n", group5);

	return (0);
}
