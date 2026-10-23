#include <stdio.h>
#include <stdlib.h>
int main()
{
		float a, b, c;
		int month, week;
		system("clear");
		
												/*Validity of triangle by side*/
		printf("Enter the first side of triangle: ");
		scanf("%f", &a);
		printf("Enter the second side of triangle: ");
		scanf("%f", &b);
		printf("Enter the third side of triangle: ");
		scanf("%f", &c);
		if (a+b>c || b+c>a || a+c>b)
			printf("Valid Triangle\n\n");
		else
			printf("Invalid Triangle!\n\n");
		
												/*Validity of triangle by angle*/
		printf("Enter the first angle of triangle: ");
		scanf("%f", &a);
		printf("Enter the second angle of triangle: ");
		scanf("%f", &b);
		printf("Enter the third angle of triangle: ");
		scanf("%f", &c);
		if (a+b+c==180)
			printf("Valid Triangle\n\n");
		else
			printf("Invalid Triangle!\n\n");
		
												/*Print the week day by week  number*/
		printf("Enter the week number: ");
		scanf("%d", &week);
		if (week==1)
			printf("Monday\n\n");
		else if (week==2)
			printf("Tuesday\n\n");
		else if (week==3)
			printf("Wednesday\n\n");
		else if (week==4)
			printf("Thursday\n\n");
		else if (week==5)
			printf("Friday\n\n");
		else if (week==6)
			printf("Saturday\n\n");
		else if (week==7)
			printf("Sunday\n\n");
		else
			printf("Invalid Week Number!\n\n");
			
												/*Print the total days in a month by month number*/
		printf("Enter the month number: ");
		scanf("%d", &month);
		if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("Days : 31\n\n");
		else if (month==2)
			printf("Days : 28 or 29\n\n");
		else if (month==4 || month==6 || month==9 || month==11)
			printf("Days : 30\n\n");
		else
			printf("Invalid Month Number!\n\n");
		
		return 0;
}
