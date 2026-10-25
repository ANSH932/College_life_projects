#include <stdio.h>
#include <stdlib.h>
int main()
{
	int amount;
	system("clear");
	printf("Enter the amount here: "); 
	scanf("%d", &amount);
	if (amount<1)
	{
		printf("Invalid amount");
		return 0;
	}
	printf("You will need:\n");
	if (amount>=500)
	{
		printf("x%d 500 Rupees\n", amount/500);
		amount = amount%500;
	}
	if (amount>=200 && amount<500)
	{
		printf("x%d 200 Rupees\n", amount/200);
		amount = amount%200;
	}
	if (amount>=100 && amount<200)
	{
		printf("x%d 100 Rupees\n", amount/100);
		amount = amount%100;
	}
	if (amount>=50 && amount<100)
	{
		printf("x%d 50 Rupees\n", amount/50);
		amount = amount%50;
	}
	if (amount>=20 && amount<50)
	{
		printf("x%d 20 Rupees\n", amount/20);
		amount = amount%20;
	}
	if (amount>=10 && amount<20)
	{
		printf("x%d 10 Rupees\n", amount/10);
		amount = amount/10;
	}
	if (amount>=5 && amount<10)
	{
		printf("x%d 5 Rupees\n", amount/5);
		amount = amount%5;
	}
	if (amount>=2 && amount<5)
	{
		printf("x%d 2 Rupees\n", amount/2);
		amount = amount%2;
	}
	if (amount>=1 && amount<2)
	{
		printf("x%d 1 Rupees\n", amount);
	}
	/*Done*/
	return 0;
}
