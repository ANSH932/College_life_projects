#include <stdio.h>
#include <unistd.h>
int main(){
	int user, amount, time, count;
	printf("1. Scan the Transaction\n2. Shutdown the Engine\nEnter the number here: ");
	scanf("%d", &user);
	switch (user){
		case 1:
			printf("Enter the amount of transaction: ");
			scanf("%d", &amount);
			if (amount<0){
				printf("Enter the current time in hours (0 to 23): ");
				scanf("%d", &time);
				if (time>=0 && time<=23){
					printf("Enter your dailt transaction count: ");
					scanf("%d", &count);
						if (count>0){
							if(amount>100000 || (amount>20000 && time>=1 && time<=4) || count>10)
								printf("The transaction is fraudlent\n");
							else 
								printf("Transaction success\n");
							sleep(2);
							return 0;
						}
				}
			}
			printf("Invalid value\n");
		case 2:
			printf("Shuting Down the Engine...\n");
		default:
			printf("Incorrect operation\n");
	}
	sleep(2);
	return 0;
}
