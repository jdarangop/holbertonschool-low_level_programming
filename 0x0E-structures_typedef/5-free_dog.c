#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory.
 * @d: Structure.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d);
}
