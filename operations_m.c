#include "monty.h"

/**
 * create_stack - add a new node to the head stack
 *
 * @start: pointer to the head of the stack
 * @n: element held by new node
 *
 * Return: (void)!
 */

void create_stack(stack_t **start, int n)
{
	stack_t *newnode = NULL, *temp;

	newnode = (stack_t *)malloc(sizeof(stack_t));
	if (!newnode)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	newnode->n = n;
	newnode->next = *start;
	if (*start == NULL)
	{
		newnode->prev = NULL;
	}
	else
	{
		(*start)->prev = newnode;
		newnode->prev = NULL;
	}
	*start = newnode;
}

/**
 * create_queue - add a new element to the end of the queue
 *
 * @n: element contained in the new node
 * @start: pointer to the head of the queue
 *
 * Return: void
 */

void create_queue(stack_t **start, int n)
{
	stack_t *rear = NULL, *newnode = NULL;

	newnode = (stack_t *)malloc(sizeof(stack_t));
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*start == NULL)
	{
		*start = newnode;
	}
	else
	{
		rear = *start;
		while (rear->next != NULL)
		{
			rear = rear->next;
		}
		rear->next = newnode;
		newnode->prev = rear;
	}
}
