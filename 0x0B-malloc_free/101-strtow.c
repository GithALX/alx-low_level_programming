#include "main.h"

/**
 * word_count - count words in a string.
 * @str: the to count words from.
 *
 * Return: num of words.
*/

int word_count(char *str)
{
	int count = 0, in_word = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
		i++;
	}
	return (count);
}

/**
 * malloc_word - allocates memory and copies a word
 * @str: the string containing the word
 * @start: start index of the word
 * @end: end index of the word
 *
 * Return: pointer to the new word, or NULL if it fails
 */

char *malloc_word(char *str, int start, int end)
{
	int len = end - start, i;
	char *word = malloc((len + 1) * sizeof(char));

	if (word == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		word[i] = str[start + i];
	word[len] = '\0';
	return (word);
}

/**
 * free_all - frees an array of strings
 * @arr: the array to free
 * @count: number of strings to free
 * Return: NULL.
 */

char **free_all(char **arr, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(arr[i]);
	free(arr);
	return (NULL);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: a pointer to an array of strings (words), NULL in failure.
*/

char **strtow(char *str)
{
	char **words;
	int wc, i = 0, j = 0, word_start = 0, word_end = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		
		word_start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;

		word_end = i;
		words[j] = malloc_word(str, word_start, word_end);
		if (words[j] == NULL)
		{
			free_all(words, j);
			return (NULL);
		}
		j++;
	}
	words[j] = NULL;
	return (words);
}
