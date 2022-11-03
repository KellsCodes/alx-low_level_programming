#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 *
 * @filename: name of file to print the contents to std output
 *
 * @letters: number of letters to read and print
 *
 * Return: number of letters it could read or 0 if:
 * file cannot be opened or read
 * filename is NULL or
 * write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars_len = 0;
	int open_file, write_file;

	char *buf = malloc(letters * sizeof(char));

	open_file = open(filename, O_RDONLY);

	if (buf == NULL)
		return (chars_len);

	if (filename == NULL || open_file < 0)
	{
		free(buf);
		return (chars_len);
	}


	chars_len = read(open_file, buf, letters);
	if (chars_len < 0)
	{
		free(buf);
		return (0);
	}

	write_file = write(STDOUT_FILENO, buf, chars_len);
	free(buf);

	close(open_file);

	if(write_file < 0)
		return (0);

	return ((size_t)write_file);
}
