#include <stdio.h>
#include <stdlib.h>
int main()
{
	int r1, r2;
	char f1, f2;
	system("clear");

	printf("Enter the current rank of Knight (1-8): ");
	scanf("%d", &r1);
	if (r1<=0 || r1>=9) return 0;
	printf("Enter the current file of Knight (a-h): ");
	scanf("%d", &f1);
	if (f1<'a' || f1>'h') return 0;
	printf("Enter the rank where to move the Knight (1-8): ");
	scanf("%d", &r2);
	if (r2<=0 || r2>=9) return 0;
	printf("Enter the file where to move the Knight (a-h): ");
	scanf("%d", &f2);
	if (f2<'a' || f2>'h') return 0;

	if ((abs(f1 - f2)==2 && abs(r1 - r2)==1) || (abs(f1 - f2)==1 && abs(r1 - r2)==2)) printf("Valid Move");
	else printf("Invalid move");
}
