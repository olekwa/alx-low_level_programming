#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *gem;
unsigned int len = 0;

while (str[len])
len++;

gem = malloc(sizeof(list_t));
if (!gem)
return (NULL);

gem->str = strdup(str);
gem->len = len;
gem->next = (*head);
(*head) = gem;

return (*head);
}
