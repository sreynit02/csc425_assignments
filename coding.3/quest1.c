#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
	
	int x = 100;
	int rc = fork();
	if (rc < 0){
		fprintf(stderr, "Fork failed\n");
		exit(1);
	} else if (rc == 0) {
		int c;
		c = x + 50;
		printf("hello, I am child with a value x: %d\n", c);
		
		
	} else {
		wait(NULL);
		int p;
		p = x+ 100;
		printf("hello, I am the parent with a value of x: %d\n", p);
		
	}
	return 0;
}


/*********************************************
Your name: Sreynit Khatt
Question 1: p = 150 in  the child process
Question 2: The variable changes depending on which process they are in. 
If it is a child process its variable value witll always be 150 and if it's a parent process its variable value will be 200.
*********************************************/
