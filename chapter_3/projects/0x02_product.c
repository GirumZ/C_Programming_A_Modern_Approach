#include <stdio.h>
/**
 * main - prints the discription of a product
 * Return: 0 on success
 */

int main(void)
{
	int item_num, date, month, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item_num);
	printf("Enter unit price: ");
	scanf("%6f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("Item\t\t\tUnit\t\t\tPurchase\n\t\t\tPrice\t\t\tDate\n%-d\t\t\t"
			"$ %4.2f\t\t%-2d/%2d/%4d\n", item_num, price, month, date, year);
	return (0);
}
