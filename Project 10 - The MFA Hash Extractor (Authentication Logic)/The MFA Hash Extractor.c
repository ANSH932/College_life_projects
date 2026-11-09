#include <stdio.h>
#include <unistd.h>
int main(){
	int PIN;
	printf("Enter a 4 digit PIN: ");
	scanf("%d", &PIN);
	if (PIN>=1000 && PIN<10000){
		if (PIN/1000%10+PIN%10 == PIN/100%10*(PIN/10%10))
			printf("Vault Opened\n");
		else 
			printf("Alarm Triggered\n");
	}
	else 
		printf("Only 4 digits are allowed\n");
	sleep(2);
	return 0;
}
