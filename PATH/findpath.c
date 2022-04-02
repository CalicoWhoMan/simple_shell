#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

char *str_concat(char *s1, char *s2)
{
char *n;
int i, a;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
n = malloc(strlen(s1) + strlen(s2) + 1);
if
(n == 0)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
n[i] = s1[i];
}
for (a = 0; s2[a]; i++, a++)
{
n[i] = s2[a];
}
n[i] = 0;
return (n);
}

int main(int argc,char **argv)
{
	char *s;
	char *str;
	int inc = 0;
	char *command = argv[1];
       	char *cmdpath;
	struct stat sb;
	extern char **environ;

        for(inc = 0; environ[inc] != NULL; inc++)
        {
        if (strncmp(environ[inc], "PATH", 4) == 0)
        s = (environ[inc]);
        }
	str = strtok(&s[5], ":");
	while (str != NULL)
	{
		cmdpath = str_concat(str, command);
		printf("%s, ",cmdpath);
		str = strtok(NULL, ":");
		stat(cmdpath, &sb);
	       	if (stat(cmdpath, &sb) == 0)
			execve(cmdpath, &argv[1], NULL);
	}
}
