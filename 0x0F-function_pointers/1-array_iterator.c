#include "main.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array
 *
 * @array: string
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
	{
		while (i != size)
		{
			action(array[i]);
			i++;
		}
	}
}
