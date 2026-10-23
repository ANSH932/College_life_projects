#include <stdio.h>
int main()
{
	int PIN, a, b, c, d, e;
	printf("Enter the pin: ");
	scanf("%d", &PIN);	
	
	a = PIN/10000;
	b = (PIN/1000)%10;
	c = (PIN/100)%10;
	d = (PIN/10)%10;
	e = PIN%10;
	
	if (PIN>=10000 && PIN<=99999)
	{
		if (a%2==0 && e%2!=0 && b+c==d && PIN%5==0)
		{
			printf("Vault Open!\n");
		}
		else
		{
			printf("Alarm Triggered because ");
			if (a%2!=0)
			{
				printf("the first digit is not even!\n");
			}
			else if (e%2==0)
			{
				printf("the last digit is not odd!\n");
			}
			else if (b+c!=d)
			{
				printf("the sum of second and third digit is not equals the fourth digit!\n");
			}
			else if (PIN%5!=0)
			{
				printf("the PIN is not divisible of 5!\n");
			}
		}
	}
	else 
	{
		printf("The PIN must contain only 5 digits\n");
	}
	return 0;
}
