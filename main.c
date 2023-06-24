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
	u_int32_t i;
       	u_int32_t num;
	char *buff = NULL;

	if (argc != 2)
		return (1);

	fd = fopen(argv[1], "r");
	if (!fd)
		return (1);
	while (getline(&buff,&len, fd) != EOF)
	{
		num = atoi(buff);
		for (i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				printf("%d=%d*%d\n", num, num / i, i);
				break;
			}
		}
	}
	return (0);
}
