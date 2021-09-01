#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	 if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	 } else if (rc == 0) {
		printf("Before the the close function\n");
		close(STDOUT_FILENO);
		printf("Will this print?\n");
	}
	return 0;
}



/*********************************************
Your name:Sreynit
Question 1:  if the child calls printf() to print some output after closing
the descriptor, that print statement will not print because the process is
told to close already.
Question 2: <your answer>
*********************************************/
