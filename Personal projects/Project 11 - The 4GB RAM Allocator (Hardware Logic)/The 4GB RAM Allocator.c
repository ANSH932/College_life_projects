#include <stdio.h>
#include <unistd.h>
int main(){
	int B, G, S;
	printf("Enter the RAM occupied by the System (in MB): ");
	scanf("%d", &S);
	if (S>0 && S<=4096){
		printf("Enter the RAM occupied by the Background (in MB): ");
		scanf("%d", &B);
		if (B>0 && B<=4096){
			if (S+B>4096){
				printf("Background processes are killed because RAM usage is exceding 4GB\n");
				B = 0;
			}
			printf("Enter the RAM occupied by Game(s) (in MB): ");
			scanf("%d", &G);
			if (G>0 && G<=4096){
				if (S+G+B>4096){
					printf("Background processes are killed because RAM usage is exceding 4GB\n");
					B = 0;
					}
				if (S+G>4096){
					printf("Games are closed because RAM usage is exceding 4GB\n");
					G = 0;
				}	
				if (S+G+B<=4096)
					printf("RAM Usage by System = %d\nRAM Usage by Gaming = %d\nRAM Usage by Background = %d\n", S, G, B);
			}
			else
				printf("Maximum RAM is 4GB\n");
		}
		else
			printf("Maximum RAM is 4GB\n");
	}
	else
		printf("Maximum RAM is 4GB\n");
	sleep(2);
	return 0;
}
