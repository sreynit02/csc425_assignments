#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	int address;
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else (rc == 0) {
		printf("Child is running\n");
		int address = getpid();
		printf("address: %d\n", address);	
	}
	int rc_wait = waitpid(address);
	printf("Parent running. PID: %d\n", rc_wait);

	return 0;
}
/*********************************************
Your name:Sreynit Khatt
Question 1: waitpid() would be useful when there are multiple child are 
running and it would allow the specification of the process id of the child
that we want the parent to wait on.
*********************************************/
