#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arg v and not using arg c
 *
 * @ac: number of arguments
 * @av: array of argument characters
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	while (*av)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
