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
		close(STDOUT_FILENO);
		open("./p4.output", O_CREAT);
		char *myargs[3];
		myargs[0] = strdup("wc"); // program: wc (word count)
		myargs[1] = strdup("p4.c"); // arg: file to count
		myargs[2] = NULL; // mark end of array
		execvp(myargs[0], myargs); // runs word count
	 } else {
		  wait(NULL);
	 }
	return 0;
}
/*********************************************
Your name:Sreynit
Example taken from textbook
*********************************************/
