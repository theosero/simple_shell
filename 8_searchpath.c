#include "main.h"

/**
 * find_pathname - Returns full pathname of executable
 * if found
 * @cmd: Executable
 * @env: ENvironment
 *
 * Return: Pointer to char
 * NULL if fails
 */
char *find_pathname(char *cmd, char **env)
{
	struct stat st;
	int count;
	char *token;
	char *buf1;
	char *buf2;
	char *temp;

	if (env == NULL)
		return (NULL);

	count = 0;

	buf1 = malloc(sizeof(char) * MAX_COUNT);
	buf2 = malloc(sizeof(char) * MAX_COUNT);

	while (env[count] != NULL)
	{
		temp = env[count];
		buf1 = _strcpy(buf1, temp);
		token = strtok(buf1, "=");
		if (_strcmp(token, "PATH") == 0)
		{
			break;
		}
		count++;
	}
	token = strtok(NULL, ":");
	while (token != NULL)
	{
		buf2 = _strcpy(buf2, token);
		buf2 = _strcat(buf2, "/");
		buf2 = _strcat(buf2, cmd);

		if (stat(buf2, &st) == 0)
		{
			return (buf2);
		}
		token = strtok(NULL, ":");
	}
	return (NULL);
}
