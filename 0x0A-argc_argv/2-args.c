#include "main.h"
#include <stdio.h>
/**
 * main-print all argument
 * @argc:count num of argument
 * @argv:string of the argument
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
