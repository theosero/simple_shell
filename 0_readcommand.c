#include "main.h"

/**
 * readcommand - Parses string and gets commands and
 * arguments.
 *
 * Return: Pointer to char array
 */

char **readcommand(void)
{
	char *line;
	size_t len;
	char *token;
	char **argv;
	int count;

	count = 0;
	line = NULL;
	len = 0;
	argv = malloc(sizeof(char *) * MAX_LIST);

	getline(&line, &len, stdin);
	token = strtok(line, " ");

	if (token == NULL)
	{
		return (NULL);
	}
	while (token != NULL)
	{
		argv[count] = token;
		count++;
		token = strtok(NULL, " ");
	}
	token = strtok(argv[count - 1], "\n");
	argv[count - 1] = token;
	count++;
	argv[count] = NULL;
	return (argv);

}
