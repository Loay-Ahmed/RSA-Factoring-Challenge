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
	int i, len = 100, num;
	char *buff;

	if (argc != 2)
		return (1);

	fd = fopen(argv[1], "r");
	if (!fd)
		return (1);
	while (getline(&buff, (size_t *)&len, fd) != EOF)
	{
		num = atoi(buff);
		for (i = 2; i <= 9; i++)
		{
			if (num % i == 0)
			{
				printf("%d=%d*%d", num, num/i, i);
				break;
			}
		}
	}
}
