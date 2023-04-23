#include "shell.h"

/**
 * _getenv - get environment value of name
 * @name: name of environment variable
 *
 * Return: value of env
 **/

char *_getenv(const char *name)
{
	int i = 0, j;
	char *env_var, *env_val;

	if (!name)
		return (NULL);

	while (environ[i])
	{
		env_var = environ[i];
		j = 0;

		while (name[j] && env_var[j] == name[j])
			j++;

		if (name[j] == '\0' && env_var[j] == '=')
		{
			env_val = env_var + (j + 1);
			return (env_val);
		}
		i++;
	}
	return (NULL);
}

