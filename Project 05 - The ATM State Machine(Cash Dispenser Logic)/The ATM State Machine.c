#include <stdio.h>
#include <unistd.h>
int main(){
	int amt;
	printf("Enter the amount (Note - The ATM is currently holding only the notes of 500, 200, 100 & 50): ");
	scanf("%d", &amt);
	if (amt%50==0){
		printf("You will need:\n");
		if (amt>=500) {
			printf("%dx 500 rupees\n", amt/500);
			amt = amt%500;
		}
		if (amt>=200){
			printf("%dx 200 rupees\n", amt/200);
			amt = amt%200;
		}
		if (amt>=100){
			printf("%dx 100 rupees\n", amt/100);
			amt = amt%100;
		}
		if (amt>=50){
			printf("%dx 50 rupees\n", amt/50);
		}
	}
	else printf("AMOUNT IS NOT DIVISIBLE BY 50\n");
	sleep(2);
	return 0;
}
