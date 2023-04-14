#include "main.h"
/**
 * create_buffer - crea un nuevo buffer 1024
 * @file: archivo
 * Return: puntero al buffer creado
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * cerrar_fd - cierra un archivo abierto
 * @fd: file descriptors
 * Return: Always 0.
 */
void cerrar_fd(int fd)
{
	int fd1;

	fd1 = close(fd);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copia un archivo a otro archivo
 * @argv: file_from y file_to
 * @argc: numeros de argumentos
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, red, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	red = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || red == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close(file_from);
			close(file_to);
			exit(98);
		}
		wrt = write(file_to, buffer, red);
		if (file_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close(file_from);
			close(file_to);
			exit(99);
		}
		red = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
		} while (red > 0);
	free(buffer);
	cerrar_fd(file_from);
	cerrar_fd(file_to);
	return (0);
}
