#include <stdio.h>

/**
 * main - max value of pid
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%u\n", /proc/sys/kernel/pid_max);
	return (0);
}
