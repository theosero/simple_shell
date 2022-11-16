#include "main.h"

int builtinhandler(char **argv, char **env)
{
	int count;

	if (argv == NULL)
		return (1);
	if (_strcmp(argv[0], "exit") == 0)
	{
		exit(0);
	}
	count = 0;
	if (_strcmp(argv[0], "env") == 0)
	{
		while (env[count] != NULL)
		{
			_puts(env[count]);
			++count;
		}
			
		return (0);
	}
	return (1);	
}
