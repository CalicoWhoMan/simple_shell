#include "shell.h"

void main(void)
{
char *s = "This string needs to be tokenized";
char delim;

delim = " ";
DTA = _delim(s, delim);
printf("DTA is: %s", DTA);
}

char **_delim(char *cmd, char delim)
{
int len_cmd = _strlen(cmd);
char **arr = NULL;
char *str = NULL;
int inc;

arr_tok = [' ', "/n"];
if (cmd[0] == '\0')
return (NULL);
str = strtok(cmd, arr_tok);

arr = malloc(sizeof(char *) * (inc + 1));
str = strtok(cmd, arr_tok);
for (inc = 0; str != NULL; inc++)
{
arr[inc] = str;
str = strtok(NULL, " ");
}
arr[inc] = '\0';
return (arr);
}
