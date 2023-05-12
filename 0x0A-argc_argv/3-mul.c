#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -print multiplies two numbers
 * @argc:count number of argument
 * @argv:string of the argument
 * Return:1 if the argument is lesss then three otherwide 0;
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}

	return (0);
}
