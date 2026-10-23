#include <stdio.h>
int main() {
	int date, month, year;
	
	printf("Enter the year: ");
	scanf("%d", &year);
	if (year<1) 
	{
		printf("Invalid Year!\n"); 
		return 0;
	}
	
	printf("Enter the month: ");
	scanf("%d", &month);
	if (month<1 || month>12) 
	{
		printf("Invalid Month!\n"); 
		return 0;
	}
	
	printf("Enter the date: ");
	scanf("%d", &date);
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if (date<1 || date>31) 
		{
			printf("Invalid Date!\n"); 
			return 0;
		}
		else 
		{
			if (date==31 && month<12)
			{
				printf("Tomorrows's date: 1/%d/%d", month+1, year);	
			}
			else if (date==31 && month==12)
			{
				printf("Tomorrows's date: 1/1/%d", year+1);	
			}
			else 
			{
				printf("Tomorrows's date: %d/%d/%d", date+1, month, year);	
			}
		}
	}
	else if (month==2) 
	{
		if ((year%4==0 && year%100!=0) || year%400==0)
		{
			if (date<1 || date>29) 
			{
				printf("Invalid Date!\n"); 
				return 0;
			}
			else 
			{
				if (date==29)
				{
					printf("Tomorrows's date: 1/%d/%d", month+1, year);	
				}	
				else 
				{
					printf("Tomorrows's date: %d/%d/%d", date+1, month, year);	
				}
			}
		}
		else 
		{
			if (date<1 || date>28) 
			{
				printf("Invalid Date!\n"); 
				return 0;
			}
			else 
			{
				if (date==28)
				{
					printf("Tomorrows's date: 1/%d/%d", month+1, year);	
				}
				else 
				{
					printf("Tomorrows's date: %d/%d/%d", date+1, month, year);	
				}
			}
		}
	}
	else 
	{
		if (date<1 || date>30) 
		{
			printf("Invalid Date!\n"); 
			return 0;
		}
		else 
			{
				if (date==30)
				{
					printf("Tomorrows's date: 1/%d/%d", month+1, year);	
				}
				else 
				{
					printf("Tomorrows's date: %d/%d/%d", date+1, month, year);	
				}
			}
	}

	return 0;
}
