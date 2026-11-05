#include <stdio.h>
#include <unistd.h>
int main(){
	int brookx, brooky, bbishopx, bbishopy, wkingx, wkingy;
	printf("Note - The range of X and Y coordinates must be from 1-8 and in integer\n");
	printf("Enter the X coordinates of white's king: ");
	scanf("%d", &wkingx);
	if (wkingx>=1 && wkingx<=8){
		printf("Enter the Y coordinates of the white's king: ");
		scanf("%d", &wkingy);
		if (wkingy>=1 && wkingy<=8){
			printf("Enter the X coordinates of the black's bishop: ");
			scanf("%d", &bbishopx);
			if (bbishopx>=1 && bbishopx<=8){
				printf("Enter the Y coordinates of the black's bishop: ");
				scanf("%d", &bbishopy);
				if (bbishopy>=1 && bbishopy<=8){
					printf("Enter the X coordinates of the black's rook: ");
					scanf("%d", &brookx);
					if (brookx>=1 && brookx<=8){
						printf("Enter the Y coordinates of the black's rook: ");
						scanf("%d", &brooky);
						if (brooky>=1 && brooky<=8){
								
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
