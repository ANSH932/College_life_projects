#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
	char user;
	do
	{
		system("clear");
		printf("Enter your age: ");
		scanf("%d", &age);
		if (age>=18)
		{
			printf("Eligible for voting\n");
		}
		else
		{
			printf("Not eligible for voting\n");
		}
		printf("Do you want to use the program again? (y/n) : ");
		scanf(" %c", &user);
	} while (user=='y' || user=='Y');
	return 0;
}
