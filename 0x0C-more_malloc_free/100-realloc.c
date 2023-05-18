#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r, *ot;
	unsigned int l;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	r = malloc(new_size);
	if (!r)
		return (NULL);
	ot = ptr;
	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
			r[l] = ot[l];
	}
	if (new_size > old_size)
	{
		for (l = 0; l < old_size; l++)
			r[l] = ot[l];
	}
	free(ptr);
	return (r);
}
