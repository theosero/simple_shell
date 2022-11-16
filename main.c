#include "main.h"

/**
 * main - Simple shell
 * @argc: Number of command line arguments
 * @av: Double pointer to char
 * @env: Environment
 *
 * Return: 0
 */
int main(__attribute__((unused))int argc, char **av, char **env)
{
	char *pathname;
	char **argv;

	while (1)
	{
		_puts2("($) ");

		argv = readcommand();

		if (builtinhandler(argv, env) == 0)
			continue;
		if (**argv != '/')
		{
			pathname = find_pathname(argv[0], env);
			if (pathname == NULL)
			{
				_puts2(av[0]);
				_puts2(": ");
				_puts2(argv[0]);
				_puts2(": ");
				_puts(" command not found");
				free(argv);
				free(pathname);
				continue;
			}
			else
			{
				argv[0] = pathname;
				if (execCall(argv, env) != 0)
				{
					_puts2(av[0]);
					_puts2(": ");
					_puts2(argv[0]);
					_puts2(": ");
					_puts("Permission denied");
					free(pathname);
					free(argv);
					continue;
				}
				else
				{
					free(pathname);
					free(argv);
					continue;
				}

			}
		}
		else
		{
			if (execCall(argv, env) != 0)
			{
				_puts2(av[0]);
				_puts2(": ");
				_puts2(argv[0]);
				_puts2(": ");
				_puts("No such file or directory exists");
				free(argv);
				continue;
			}
		}

	}
	return (0);
}
