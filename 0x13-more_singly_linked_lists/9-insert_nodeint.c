#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int i)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int ui = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || index > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->i = i;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (ui == index)
		{
			if (ui == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((ui + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		ui++;
	}
	return (NULL);
}
