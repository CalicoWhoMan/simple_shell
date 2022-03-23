#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * Main - get parent ID of process
 *
 */

int main (void)
{
	pid_t ppid;
	ppid = getppid();
	printf("parent process id is : %d\n", ppid);
	return (0);	
}
