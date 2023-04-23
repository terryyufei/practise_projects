#include <stdlib.h>
#include <string.h>

/**
 * split_string - split a string into tokens by delimeter
 * @str: string
 * @delimiter: delimeter
 * Return: array of strings of tokens
 **/

char **split_string(const char *str, const char delimiter)
{
	size_t i, j, k = 0, count = 0, len = strlen(str);
	char **result = NULL;

	/* Count the number of tokens in the string*/
	for (i = 0; i < len; i++)
	{
		if (str[i] != delimiter && (i == 0 || str[i - 1] == delimiter))
		{
			count++;
		}
	}

	/* Allocate memory for the result array*/
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
	{
		return (NULL);
	}

	/* Split the string into tokens and store them in the result array*/
	for (i = 0; i < len; i++)
	{
		if (str[i] != delimiter)
		{
			j = i;

			while (j < len && str[j] != delimiter)
			{
				j++;
			}
			result[k] = malloc(sizeof(char) * (j - i + 1));

			if (!result[k])
			{
				free_arr(result);
				return (NULL);
			}
			memcpy(result[k], &str[i], j - i);
			result[k][j - i] = '\0';
			k++;
			i = j - 1;
		}
	}

	/* Set the last element of the result array to NULL*/
	result[k] = NULL;
	return (result);
}
/**
 * free_arr - free the array
 * @arr: array
 **/
void free_arr(char **arr)
{
	if (arr)
	{
		for (size_t i = 0; arr[i]; i++)
		{
			free(arr[i]);
		}
		free(arr);
	}
}

