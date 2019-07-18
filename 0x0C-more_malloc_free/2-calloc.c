#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tmp = malloc(nmemb * size);

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		tmp[i] = 0;
	}

	return (tmp);
}
