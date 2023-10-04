#include <stdio.h>
#include <string.h>
/**
 * main - will print out all the cmd arguments
 * @ac: cmd args count.
 * @av: cmd arg vector.
 * Return: Always 0.
 */
int main(int __attribute__((unused)) ac, char **av)
{
	int x = 0;

	while(av[x])
	{
		if (strcmp(av[x], " "))
		{
			putchar(' ');
		}
		printf("%s", av[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
