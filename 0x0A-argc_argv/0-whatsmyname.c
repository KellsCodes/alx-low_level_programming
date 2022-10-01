#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: command line argv counts
 * @argv: command line array arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
