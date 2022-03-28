#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

int main(__attribute__((unused)) int ac, char *argv[]);
char **_delim(char *del_st);
void sigstop(int sig);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _putchar(char c);
void _env(void);

#endif /*SHELL_H*/
