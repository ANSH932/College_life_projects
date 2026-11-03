#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int port;
	char protocol;
	system("clear");
	printf("Enter the port number: ");
	scanf("%d", &port);
	printf("Enter the protocol type (T: TCP, U: UDP): ");
	scanf(" %c", &protocol);
	if (protocol == 'U' || protocol == 'u' || protocol == 'T' || protocol == 't'){
		switch (port){
			case 21:
				printf("VULNERABLE: Unencrypted File Transfer Detected. Connection Dropped.\n");
				break;
			case 22:
				if (protocol == 'T' || protocol == 't')
					printf("Secure Shell connection allowed.\n");
				else
					printf("Anomaly detected. UDP not supported for SSH. Dropping.\n");
				break;
			case 80:
				printf("VULNERABLE: Cleartext web traffic.\n");
				break;
			case 443:
				printf("Secure web traffic allowed.\n");
				break;
			default:
				printf("PORT CLOSED: Traffic blocked by default.\n");
				break;
		}
	}
	else
		printf("Invalid protocol type\n");
	sleep(2);
	return 0;
}
