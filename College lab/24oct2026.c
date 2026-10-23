#include <stdio.h>
#include <stdlib.h>
int main()
{
	int amount, fh/*five hundred*/, th/*two hundred*/, oh/*One Hundred*/, fifty, twenty, ten, five, two, one;
	system("clear");
	printf("Enter the amount: ");
	scanf("%d", &amount);
	if (amount<0) printf("Invalid number!\n");
	fh = amount/500;
	amount = amount%500;
	th = amount/200;
	amount = amount%200;
	oh = amount/100;
	amount = amount%100;
	fifty = amount/50;
	amount = amount%50;
	twenty  = amount/20;
	amount = amount%20;
	ten = amount/10;
	amount = amount%10;
	five = amount/5;
	amount = amount%5;
	two = amount/2;
	amount = amount%2;
	one = amount/1;
	if (fh!=0) printf("x%d 500 rupees\n", fh);
	if (th!=0) printf("x%d 200 rupees\n", th);
	if (oh!=0) printf("x%d 100 rupees\n", oh);
	if (fifty!=0) printf("x%d 50 rupees\n", fifty);
	if (twenty!=0) printf("x%d 20 rupees\n", twenty);
	if (ten!=0) printf("x%d 10 rupees\n", ten);
	if (five!=0) printf("x%d 5 rupees\n", five);
	if (two!=0) printf("x%d 2 rupees\n", two);
	if (one!=0) printf("x%d 1 rupees\n", one);
	return 0;
}
