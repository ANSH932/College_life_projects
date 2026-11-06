#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int rank1, rank2;
	char file1, file2;
	printf("Enter the current rank of the Knight: ");
	scanf("%d", &rank1);
	if (rank1>=1 && rank1<=8){
		printf("Enter the current file of the Knight: ");
		scanf(" %c", &file1);
		file1  = tolower(file1);
		if (file1>=97 && file1<=104){
			printf("Enter the rank where you want to put your knight: ");
			scanf("%d", &rank2);
			if (rank2>=1 && rank2<=8){
				printf("Enter the file where you want to put your knight: ");
				scanf(" %c", &file2);
				file2 = tolower(file2);
				if (file2>=97 && file2<=104){
					if ((abs(file1 - file2)==2 && abs(rank1 - rank2)==1) || (abs(file1 - file2)==1 && abs(rank1 - rank2)==2)){
						printf("N%c%d to N%c%d is possible\n", file1, rank1, file2, rank2);
						return 0;
					}
				}
			}
		}
	}
	printf("INVALID COORDINATE\n");
	sleep(2);
	return 0;
}
