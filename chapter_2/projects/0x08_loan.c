#include <stdio.h>
/**
 * main - calculates balance after monthly loan payment
 * Return: 0 on success
 */

int main(void)
{
	float amount, annual_rate, monthly_rate, monthly_payment, balance,
	      first_balance, second_balance, third_balance;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &annual_rate);
	printf("Enter monthly patment: ");
	scanf("%f", &monthly_payment);

	monthly_rate = (annual_rate / 100) / 12;
	first_balance = (amount + (amount * monthly_rate)) - monthly_payment;
	second_balance = (first_balance + (first_balance * monthly_rate))
		- monthly_payment;
	third_balance = (second_balance + (second_balance * monthly_rate))
		- monthly_payment;

	printf("Balance remaining after first payment: %.2f\n", first_balance);
	printf("Balance remaining after second payment: %.2f\n", second_balance);
	printf("Balance remaining after third payment: %.2f\n", third_balance);
	return (0);
}
