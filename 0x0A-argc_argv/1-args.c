#include "main.h"
#include <stdio.h>
/**
 * main-prints num of argument passed to a string
 * @argc:count the num of argument
 * @argv:the string to count
 * Return:0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
