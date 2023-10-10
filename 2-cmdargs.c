#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _splitargs - will split cmd args (strtok)
 * @argc: arg count
 * @argv: arg vector
 * Return: [] of words
 */
char **_splitargs(int argc, char**argv)
{
	char **collection = (char **)malloc(argc * sizeof(char *));
	int x;

	for (x = 0; x < argc; x++)
	{
		collection[x] = malloc(strlen(argv[x] + 1));
		strcpy(collection[x], argv[x]);
	}

	return (collection);
}
/**
 * main - prints out Arg vectors using split_args (Test _splitargs)
 * @ac: cmd arg count
 * @av: amd arg vector
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int y;
	char **argwords = _splitargs(ac, av);

	for (y = 0; y < ac; y++)
	{
		printf("%s\n", argwords[y]);
		free(argwords[y]);
	}
	free(argwords);
	return (0);
}
