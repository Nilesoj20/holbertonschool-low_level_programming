#include "lists.h"
/**
 * add_node - nuevo nodo
 * @head: doble pointer
 * @str: string
 * Return: nodo inicializado
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		exit(1);
	}
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (0);
}
