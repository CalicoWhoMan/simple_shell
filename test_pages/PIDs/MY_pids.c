#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	pid=fork();

	if(pid<0)
	{
		printf("cannot be executed");
	}
	else if (pid==0)
	{
		printf("child process id (pid) %d", getpid());
	}
	else 
	{
		printf("parent process id (ppid) %d", getppid());
		{
			return 0;
		}
	}
}
