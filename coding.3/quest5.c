#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0) {
		printf("Child is running\n");
		//int rc_wait = wait(NULL);
		//printf("rc_wait: %d\n", rc_wait);
	}else{
		int rc_wait = wait(NULL);
		printf("Parent waited and run: %d\n", rc_wait);
		//printf("parent running\n");
		}
	return 0;
}
/*********************************************
Your name:Sreynit Khatt
Question 1: Wait returns the process id of the child it is waiting for.
Question 2: When I used wait() in the child process, the parent runs first, 
and  Wait() returns -1. I think that this means that the call for Wait() 
failed so the the parent didn't wait for the child nor did the child didn't wait
for the child either.
*********************************************/
