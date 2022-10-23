#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	printf("\nbefore forking\n");
	int rv = fork();
	fork();
	fork();
	printf("\nafter forking\n");
	printf("Return value = %d", rv);
	return 0;
}
