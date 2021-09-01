#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	
	int x = 100;
	int rc = fork();
	if (rc < 0){
		fprintf(stderr, "Fork failed\n");
		exit(1);
	} else if (rc == 0) {
		int c;
		c = x + 50;
		printf("hello, I am child with a value x:");
		printf("X:", c);
		
	} else {
		int p;
		p = x+ 100;
		printf("hello, I am the parent with a value of x:");
		printf("X:", p);
	}
}


/*********************************************
Your name: Sreynit Khatt
Question 1: x = 150 in  the child process
Question 2: The variable changes depending on which process they are in. 
If it is a child process x=150 and if it's a parent process x=200.
*********************************************/
