#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	system("clear");
	printf("Enter a character: ");
	scanf("%c", &a);
	if ((a>='a' && a<='z') || (a>='A' && a<='Z')) {
		printf("%c is an alphabet\n", a); }
	else if (a>='0' && a<='9') {
		printf("%c is a digit\n", a); }
	else {
		printf("%c is a special symbol\n", a); }
	return 0;
}
