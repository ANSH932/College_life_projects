#include <stdio.h>
int main()
{
	int age;
	float income, tax;
	char VIP;
	printf("Enter your yearly income: ");
	scanf("%f", &income);
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age<=0)
	{
		printf("Invalid age!\n");
		return 0;
	}
	printf("Are you VIP(Y/N): ");
	scanf(" %c", &VIP);
	if (income<0)
	{
		printf("Invalid Income!\n");
		return 0;
	}
	else if (income<=300000)
	{
		tax = 0;
	}
	else if (income>300000 && income<=700000)
	{
		tax = (income-300000)*0.1;
	}
	else
	{
		tax = ((income-700000)*0.2)+40000;
	}
	// 1. First, apply the age discount
	if (age >= 60)
	{
		tax = tax - 5000;
		if (tax < 0) 
		{
			tax = 0;
		}
	}
	
	if (VIP == 'y' || VIP == 'Y')
	{
		tax = tax + (tax * 0.05);
	}
	
	printf("Gross income = %f\n", income);
	printf("Total tax = %f\n", tax);
	printf("Take-Home Pay = %f\n", income - tax);
	
	return 0;
}
