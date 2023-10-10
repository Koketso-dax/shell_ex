#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * main - will exercute ls -l /tmp cmommand
 * Return: 0 on success. 1 on failure
 */
int main(void)
{
	int x;
	pid_t _child;
	char *args[] = {"ls", "-l", "/tmp", NULL};
	char *env[] = {NULL};

	for (x = 0; x < 5; x++)
	{
		_child = fork();

		if (_child < 0)
		{
			perror("Error\n");
			return (1);
		}
		else if (_child == 0)
		{
			execve("/bin/ls", args, env);
			perror("Error\n");
			return (1);
		}
		else
		{
			wait(NULL);
		}
	}
	return (0);
}
