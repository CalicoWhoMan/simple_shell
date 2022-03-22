#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main(void)
{	
	int pid_t = getpid();
	printf("pid is : %d\n", pid_t);
	return (0);
}	

