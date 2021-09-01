#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	if (rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc ==0) {
		printf("hello\n");
	} else {
		wait(NULL);
		printf("goodbye");
	}
	return 0;
}


/*********************************************
Your name:Sreynit
Question 1: No, I cannot ensure that the child will print first without 
calling the wait(). I tried getting rid of the wait() and the result shows 
the child don't always print first.
*********************************************/
