#include "main.h"

/**
 * execCall - Forks a child and runs executable
 * @argv: List of arguments
 * @env: Environment
 * Return: 0 if successful
 * Other number if failed
 */
int execCall(char **argv, char **env)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (1);
	}
	else if (pid == 0)
	{
		if (execve(argv[0], argv, env) == -1)
		{
			return (1);
		}
	}
	else
	{
		wait(NULL);
		return (0);
	}
	return (1);

}
