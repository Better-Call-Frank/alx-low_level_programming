#include <stdlib.h>
#include <string.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        str++;
    }

    return count;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    int words, i, j, len, start;
    char **matrix, *word;

    if (str == NULL || *str == '\0')
        return NULL;

    words = count_words(str);
    if (words == 0)
        return NULL;

    matrix = malloc(sizeof(char *) * (words + 1));
    if (matrix == NULL)
        return NULL;

    i = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            str++;
            continue;
        }

        start = i;
        while (*str != ' ' && *str != '\0')
        {
            i++;
            str++;
        }

        len = i - start;
        word = malloc(sizeof(char) * (len + 1));
        if (word == NULL)
        {
            for (j = 0; j < words; j++)
                free(matrix[j]);
            free(matrix);
            return NULL;
        }

        strncpy(word, &str[i - len], len);
        word[len] = '\0';
        matrix[words - 1] = word;
        words--;
    }

    matrix[i] = NULL;
    return matrix;
}
