#include "main.h"
/**
 * funciones - check the code
 * @variable:
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t letraActual, retWrite;
	size_t canLetras;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	letraActual = read(fd, buffer, letters);
	if (letraActual == - 1)
		return (0);
	retWrite = write(STDOUT_FILENO, buffer, letraActual);
	if (retWrite < 0)
		return (0);
	close(fd);
	free(buffer);
	canLetras = (size_t)retWrite;
	return (canLetras);
}
