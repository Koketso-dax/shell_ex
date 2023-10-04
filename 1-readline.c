#include <stdio.h>
#include <stdlib.h>
/**
 * _getline - will get a str entered by user and save it to a buffer
 * @buff: str entered
 * @n: ptr to num of bytes
 * @stream: stream type
 *
ssize_t getline(char **buff, size_t *n, FILE *stream)
{
	if (!buff || !n || !stream)
	{
		return (-1);
	}
}
 */

/**
 * main - will wait for user to enter cmd and print it on the next line
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buffer = NULL;
	size_t len = 0;
	ssize_t line = 0;

	do
	{
		printf("$ ");
		fflush(stdout);
		line = getline(&buffer, &len, stdin);
		
		if (line == -1)
		{
			putchar('\n');
			break;
		}
		
		if (line > 0 && buffer[line - 1] == '\n')
		{
			buffer[len - 1] = '\0';
		}
		printf("%s", buffer);
	}
	while(1);
	free(buffer);
	return (0);
}
