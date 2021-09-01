#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
	int openValue = open("./p4.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
	int rc = fork();       
	if (rc < 0) {
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0){
		printf("I am the child: %d\n", openValue);
		
	}else{
		wait(NULL);
		printf("I am the parent: %d\n", openValue);
	}

	return 0;
}

/*********************************************
Your name: Sreynit Khatt
Question 1: Yes, both could access the file descriptor returned by the open()
Question 2:  When they are writing to the file concurrently, the child would
run first and then the parent. They would also get the same file descriptor.
*********************************************/
