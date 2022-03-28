#include "shell.h"
/**
 * sigstop - stops the Ctrl + C exit loop and goes back to the main loop
 * @sig: signal interrupt
 *
 * Return: void
 */

void sigstop(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n$ ", 3);
}
