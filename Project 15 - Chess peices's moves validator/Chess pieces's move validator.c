#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
int main(){
	char choice, r1, r2, f1, f2, *piece, color;
	printf("Select the piece that you want to check the move of: \n1. King\n2. Queen\n3. Rook\n4. Bishop\n5. Knight\n6. Pawn\nEnter the value: ");
	scanf(" %c", &choice);
	if (choice>='1' && choice<='6')
	{
		if (choice=='1')
			piece = "King";
		if (choice=='2')
			piece = "Queen";
		if (choice=='3')
			piece = "Rook";
		if (choice=='4')
			piece = "Bishop";
		if (choice=='5')
			piece = "Knight";
		if (choice=='6')
			piece = "Pawn";
		printf("Enter the current file of %s: ", piece);
		scanf(" %c", &f1);
		f1 = tolower(f1);
		if (f1>='a' && f1<='h'){
			printf("Enter the current rank of %s: ", piece);
			scanf(" %c", &r1);
			if (r1>='1' && r1<='8'){
				printf("Enter the moving file of %s: ", piece);
				scanf(" %c", &f2);
				f2 = tolower(f2);
				if (f2>='a' && f2<='h'){
					printf("Enter the moving rank of %s: ", piece);
					scanf(" %c", &r2);
					if (r2>='1' && r2<='8'){
						if ((choice=='1' && ((abs(f1 - f2)==1 && abs(r1 - r2)==1) || (f1==f2 && abs(r1 - r2)==1) || (r1==r2 && abs(f1- f2)==1))) || (choice=='2' && (f1==f2 || r1==r2 || abs(f1 - f2)==abs(r1 - r2))) || (choice=='3' && (f1==f2 || r1==r2)) || (choice=='4' && abs(f1 - f2)==abs(r1 - r2)) || (choice=='5' && ((abs(r1 - r2)==1 && abs(f1 - f2)==2) || (abs(r1 - r2)==2 && abs(f1 - f2)==1)))){
							printf("Valid Move\n");
							sleep(2);
							return 0;
						}
						if (choice=='6'){
							printf("Enter the color of the pawn (B - Black and W - White): ");
							scanf(" %c", &color);
							color = tolower(color);
							if (f1==f2 && ((r1!='1' && color=='w' && ((r1=='2' && (r2=='4' || r2=='3')) || r1-r2==-1)) || (r1!='8' && color=='b' && ((r1=='7' && (r2=='6' || r2=='5')) || r1-r2==1)))) {
								printf("Valid Move\n");
								sleep(2);
								return 0;
							}
						}
					}
				}
			}
		}
	}
	
	printf("Invalid value\nExiting...");
	sleep(2);
	return 0;
}
