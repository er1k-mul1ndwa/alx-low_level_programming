#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from
 * followed by a new line
 * Return: 0 success
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
