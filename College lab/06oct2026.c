#include <stdio.h>
#include <stdlib.h>
int ctof();
int ftoc();
int square();
int length();
int main()
{
	ctof();
	ftoc();
	square();
	length();
	return 0;
}
int ctof()
{
	/* This program is made to convert the temperature from C to F */
	float c;
	printf("Enter the temperature in C: ");
	scanf("%f", &c);
	printf("%f C = %f F\n\n", c, (c*9/5)+32);
	return 0;
}
int ftoc()
{
	/* This program is made to convert the temperature from F to C */
	float f;
	printf("Enter the temperature in F: ");
	scanf("%f", &f);
	printf("%f F = %f C\n\n", f, (f-32)*5/9);
	return 0;
}
int square()
{
	/* This program will calculate the area and perimeter of a square */
	float s;
	printf("Enter the side of square: ");
	scanf("%f", &s);
	printf("Area = %f\nPerimeter = %f\n\n", s*s, 4*s);
	return 0;
}
int length()
{
	/* This program will convert cm into km and m */
	float len;
	printf("Enter the length in cm: ");
	scanf("%f", &len);
	printf("%f cm = %f km\n%f cm = %f m\n\n", len, len/100000, len, len/100);
	return 0;
}
