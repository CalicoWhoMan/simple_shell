#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char **environ;
	int inc;

	for (inc = 0; environ[inc] != NULL; inc++)
	{
	if (strncmp(environ[inc], "PATH", 4) == 0)
	printf("%s, ", environ[inc]);
	}
}
