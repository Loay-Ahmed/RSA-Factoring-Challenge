#include "main.h"

/**
 * main - start point of program
 *
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 (sccess), 1 (fail)
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	size_t len;
	char *buff = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&buff,&len, fd) != EOF)
	{
		factor(buff);
	}
	return (0);
}
