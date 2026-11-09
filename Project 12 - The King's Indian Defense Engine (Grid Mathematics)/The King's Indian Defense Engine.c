#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
int main(){
	char brookx, brooky, bbishopx, bbishopy, wkingx, wkingy;
	printf("Enter the file of white's king: ");
	scanf(" %c", &wkingx);
	wkingx = tolower(wkingx);
	if (wkingx>=97 && wkingx<=104){
		printf("Enter the rank of the white's king: ");
		scanf(" %c", &wkingy);
		if (wkingy>=49 && wkingy<=56){
			printf("Enter the file of the black's bishop: ");
			scanf(" %c", &bbishopx);
			bbishopx = tolower(bbishopx);
			if (bbishopx>=97 && bbishopx<=104){
				printf("Enter the rank of the black's bishop: ");
				scanf(" %c", &bbishopy);
				if (bbishopy>=49 && bbishopy<=56){
					printf("Enter the file of the black's rook: ");
					scanf(" %c", &brookx);
					brookx = tolower(brookx);
					if (brookx>=97 && brookx<=104){
						printf("Enter the rank of the black's rook: ");
						scanf(" %c", &brooky);
						if (brooky>=49 && brooky<=56){
							if ((brookx==wkingx || wkingy==brooky) && abs(bbishopx - wkingx)==abs(bbishopy - wkingy)) printf("Both Black's rook and bishop are delivering check to white's king\n");
							else if (brookx==wkingx || wkingy==brooky) printf("Black rook is delivering check to white's king\n");
							else if (abs(bbishopx - wkingx)==abs(bbishopy - wkingy)) printf("Black's bishop is delivering check to white's king\n");
							else printf("White's King is Safe\n");
							sleep(2);
							return 0;
						}
					}
				}
			}
		}
	} 
	printf("INVALID COORDINATES\n");
	sleep(2);
	return 0;
}
