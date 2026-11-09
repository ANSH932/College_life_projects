#include <stdio.h>
#include <unistd.h>
int main(){
	int gold, storage, time, gem;
	printf("Enter the amount of gold in your storage: ");
	scanf("%d", &storage);
	if (storage>=0){
		printf("Enter the amount used in the construction of the build: ");
		scanf("%d", &gold);
		if (gold>0){
			printf("Enter the time taken by the build in minutes: ");
			scanf("%d", &time);
			if (time>0){
				if (storage<gold){
					if ((gold-storage)%10000!=0)
						gem = (gold-storage)/10000+1;
					else 
						gem = (gold-storage)/10000;
					printf("You will require %d more gold for this build which will cost you %d gems", gold-storage, gem);
				}
				else
					printf("You will be left with %d gold after this build", storage-gold);
				printf(" and the total time will be %d days : ", time/1440);
				time = time%1440;
				printf("%d hrs : ", time/60);
				time = time%60;
				printf("%d min", time);
				sleep(2);
				return 0;
			}
		}
	}
	printf("Invalid Amount\n");
	sleep(2);
	return 0;
}
