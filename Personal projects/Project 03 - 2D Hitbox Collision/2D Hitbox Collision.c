#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tx1, tx2, ty1, ty2, bx1, bx2, by1, by2;
	
	printf("Enter the x coordinate of the top-right corner of rectangle A: ");
	scanf("%d", &tx1);
	printf("Enter the y coordinate of the top-right corner of rectangle A: ");
	scanf("%d", &ty1);
	printf("Enter the x coordinate of the bottom-left corner of rectangle A: ");
	scanf("%d", &bx1);
	if (bx1>=tx1)
	{
		printf("%d is not the x coordinate of the bottom left corner of rectangle A\n", bx1);
		return 0;
	}
	printf("Enter the y coordinate of the bottom-left corner of rectangle A: ");
	scanf("%d", &by1);
	if (by1>=ty1)
	{
		printf("%d is not the y coordinate of the bottom left corner of rectangle A\n", by1);
		return 0;
	}
	
	printf("Enter the x coordinate of the top-right corner of rectangle B: ");
	scanf("%d", &tx2);
	printf("Enter the y coordinate of the top-right corner of rectangle B: ");
	scanf("%d", &ty2);
	printf("Enter the x coordinate of the bottom-left corner of rectangle B: ");
	scanf("%d", &bx2);
	if (bx2>=tx2)
	{
		printf("%d is not the x coordinate of the bottom left corner of rectangle B\n", bx2);
		return 0;
	}
	printf("Enter the y coordinate of the bottom-left corner of rectangle B: ");
	scanf("%d", &by2);
	if (by2>=ty2)
	{
		printf("%d is not the y coordinate of the bottom left corner of rectangle B\n", by2);
		return 0;
	}
	
	system("clear");
	printf("The coodinates of the top-right and bottom-left coners of Recatangle A are (%d,%d) and (%d,%d) resprctively\n", tx1, ty1, bx1, by1);
	printf("The coodinates of the top-right and bottom-left coners of Recatangle B are (%d,%d) and (%d,%d) resprctively\n", tx2, ty2, bx2, by2);
	 
	 /*Results to be written here*/
	if (tx1<bx2 || tx2<bx1 || ty1<by2 || by1>ty2)
	{
		printf("Rectangle A and  Rectangle B are missing each other.\n");
	}
	else if (tx1 == bx2 || bx1 == tx2 || ty1 == by2 || by1 == ty2)
	{
		printf("They are touching.\n");
	}
	else
	{
		printf("They are overlapping.\n");
	}
	
	return 0;
}
