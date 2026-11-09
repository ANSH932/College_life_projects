#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a, b;
	printf("Enter the first character of the Hexdecimal: ");
	scanf(" %c", &a);
	printf("Enter the second character of the Hexdecimal: ");
	scanf(" %c", &b);
	if (a=='A' || a=='a') a = 10;
	if (a=='B' || a=='b') a = 11;
	if (a=='C' || a=='c') a = 12;
	if (a=='D' || a=='d') a = 13;
	if (a=='E' || a=='e') a = 14;
	if (a=='F' || a=='f') a = 15;
}
