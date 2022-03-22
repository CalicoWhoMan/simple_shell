#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
/**
 * main - PID
 *
 *
 *
 */
int main()
{
	pid_t my pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}	

