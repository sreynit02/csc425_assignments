#include <stdio.h>
#include  <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	}  else if (rc == 0){
		
		//myargs[0] = strdup("/bin/ls");
		//myargs[1] = NULL;
		//myargs[2] = NULL;
		execl("/bin/ls", "/bin/ls", NULL , NULL);
	} else {
		wait(NULL);
		
	}
	return 0;
}
/*********************************************
Your name:Sreynit
Question 1: I think there are more than one variants in some basic call 
because there are more than one way to specify the arguments depending on the
program or the action that you want to happen.
Question 2: <your answer>
*********************************************/
