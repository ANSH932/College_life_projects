#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int key;
	char letter;
	printf("Enter a uppercase letter (A-Z): ");
	scanf(" %c", &letter);
	if (letter>='A' && letter<='Z'){
		printf("Enter the shift key (integer from 1-5): ");
		scanf("%d", &key);

		if (key>=1 && key<=5){
			if (letter+key>=91){
				key = (letter+key)%90;
				letter = 64;
				printf("%c\n", letter+key);
			}
			else 
				printf("%c\n", letter+key);
		}
		else 
			printf("INVALID SHIFT KEY\n");
	}
	else
		printf("INVALID LETTER\n");
	sleep(2);
	return 0;
}
