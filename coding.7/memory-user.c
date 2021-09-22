#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[]){
	int bytes =(atoi(argv[0]))*1024*1024; //convert MB to bytes
	int* allocation = malloc(bytes);
	
	
	for(int i=0; i<bytes; i++){
		allocation[i] = i;
	};	
	printf("End of Program\n");
	printf("PID: %d\n",getpid());
	return 0;
}
