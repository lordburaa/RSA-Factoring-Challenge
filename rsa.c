#define _GNU_SOURCE
#include "fac.h"
/**
 * main - main function
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer= NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage factor <fiename\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{
		factorize(buffer);
	}
	return (0);
}
