#include "main.h"

/**
 * string_nconcat - concats two string values from pointers
 *
 * @s1: pointer to first string value
 * @s2: pointer to second string value
 * @n: dynamic memory size allocated for the ponter s3
 * Return: pointer to new memory allocation contains s1
 * followed by n bytes of s2 and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = malloc(strlen(s1) + n + 1);
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s3 == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		s3[i] = *s1;
		s1++, i++;
	}

	while (n > 0)
	{
		s3[i] = s2[j];
		n -= 1;
		i += 1;
		j += 1;
	}

	s3[i] = '\0';

	return (s3);
}
