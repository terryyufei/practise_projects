#include "shell.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * _path - checks if path is absolute or relative
 * @path: path to check
 *
 * Return: 1 if relative, 0 if absolute
 **/
int _path(char *path)
{
	if (strlen(path) > 3)
	{
		if ((path[0] == '.' && path[1] == '/') || path[0] == '/' ||
				(path[0] == '.' && path[1] == '.' && path[2] == '/'))
			return (1);
	}
	return (0);
}

/**
 * make_path - creates a new path from a directory and a file
 * @path: path to directory
 * @file: file name
 *
 * Return: new path or NULL on failure
 **/
char *make_path(char *path, char *file)
{
	char *new_path;

	if (path == NULL || file == NULL)
		return (NULL);

	new_path = malloc(sizeof(char) * (strlen(path) + strlen(file) + 2));

	if (!new_path)
		return (NULL);

	strcpy(new_path, path);
	new_path[strlen(path)] = '/';
	new_path[strlen(path) + 1] = '\0';
	strcat(new_path, file);

	return (new_path);
}

/**
 * _match - finds the directory in PATH that contains an executable file
 * @exec: pointer to the executable file name
 *
 * Return: pointer to the full path of the executable, or NULL if not found
 **/
char *_match(char **exec)
{
	char **path_dirs, *full_path, *path_var;
	int i = 0;
	struct stat st;

	path_var = getenv("PATH");
	if (strlen(path_var) == 0)
		return (NULL);

	path_dirs = str_split(path_var, ':');
	if (!path_dirs)
		return (NULL);

	while (path_dirs[i] != NULL)
	{
		full_path = make_path(path_dirs[i], *exec);
		if (stat(full_path, &st) == 0)
		{
			free(*exec);
			*exec = full_path;
			free_arr(path_dirs);
			return (full_path);
		}

		free(full_path);
		i++;
	}
	free_arr(path_dirs);
	return (NULL);
}

