#include "shell.h"
/**
 * _realloc - realloc
 * @ptr: pointer
 * @old_size: old size of array
 * @new_size: new size of array
 * Return: new array
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Declare a pointer to the new block of memory.*/
	void *new_ptr;
	/* If new size is equal to old size, return original pointer.*/
	if (new_size == old_size)
	{
		return (ptr);
	}

    /* If ptr is NULL, allocate a new block of memory.*/
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

    /* If new size is 0, free the original block of memory.*/
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

    /* Allocate a new block of memory and copy the original contents.*/
	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	/* Return pointer to the new block of memory.*/
	return (new_ptr);
}

