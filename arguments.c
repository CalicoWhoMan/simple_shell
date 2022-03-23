#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints all the arguments
 *
 *
 *
 */

int main(int ac, char **av)
{
	int count;
	
	for(count = 0; count<ac; count++);
		printf("av : %p\n" count, av);
		
	return (0);
}	
