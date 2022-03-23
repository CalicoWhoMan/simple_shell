#include <stdio.h>
#include <unistd.h>

/**
 * main - prints max value PID can be.
 *
 *
 *
 */

int main()
{
	int pid;
	pid = $(cat /proc/sys/kernal/pid_max);
	printf("%s\n", pid);
	return (0);
}	

 pid=$(cat /proc/sys/kernel/pid_max)
 echo $pid
