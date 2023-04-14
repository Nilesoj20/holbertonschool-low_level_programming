#include "main.h"
/**
* _strlen - Entry point
* @s: First member
* Return: const (Success)
*/
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; cont++)
	{
		s++;
	}
	return (cont);
}
/**
 * create_file - crea un archivo
 * @filename: archivo
 * @text_content: string a copiar
 * Return: exito 1, fallo -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrt = write(fd, text_content, _strlen(text_content));
		if (wrt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
