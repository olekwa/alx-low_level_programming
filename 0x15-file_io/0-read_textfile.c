#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_dec;
	ssize_t written;
	ssize_t input_size;

	file_dec = open(filename, O_RDONLY);
	if (file_dec == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	input_size = read(file_dec, buffer, letters);
	written = write(STDOUT_FILENO, buffer, input_size);

	free(buffer);
	close(file_dec);
	return (written);
}
