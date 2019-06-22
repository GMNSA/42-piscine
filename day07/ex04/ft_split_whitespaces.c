/* ft_split_whitespaces.c */

#include <stdlib.h>

#define     IN  1
#define     OUT 0

// ----------------------------------------------------------------------

int     is_blank(char c);
int     count_words(const char *str);
int     next_count_let(char *str);
char    **ft_split_whitespaces(char *str);
char    *ft_strncpy(char *dest, char *source, unsigned size);

// ----------------------------------------------------------------------

char    **ft_split_whitespaces(char *str)
{
    int     i;
    int     j;
    int     n_words;
    int     n_word;
    char     **temp;

    i = 0;
    j = 0;
    n_word = 0;
    n_words = count_words(str);
    if (!(temp = (char **)malloc(sizeof(temp) * (n_words))))
        return (NULL);
    while (str[i])
    {
        if (!is_blank(str[i]) && !n_word)
        { 
            n_word = next_count_let(&str[i]);
            if (!(temp[j] = (char *)malloc(sizeof(temp) * (n_word + 1))))
                return (NULL);
            temp[j] = ft_strncpy(temp[j], &str[i], n_word);
            ++j;
        }
        else if (is_blank(str[i]))
            n_word = 0;
        ++i;
    }
    return (temp);
}

// ----------------------------------------------------------------------

int     count_words(const char *str)
{
    int     i;
    int     sign = IN;
    int     words;

    i = 0;
    words = 0;
    while (str[i])
    {
        if (is_blank(str[i]))
            sign = IN;
        else if (sign)
        {
            sign = OUT;
            words++;
        }
        ++i;
    }
    return (words);
}

// ----------------------------------------------------------------------

int     is_blank(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

// ----------------------------------------------------------------------

int     next_count_let(char *str)
{
    int     i;

    i = 0;
    while (!is_blank(str[i]))
        ++i;
    return (i);
}

// ----------------------------------------------------------------------

char    *ft_strncpy(char *dest, char *source, unsigned size)
{
    int         i;

    i = 0;
    while ((dest[i] = source[i]) != '\0' && size > 0)
    {
        ++i;
        --size;
    }
    dest[i] = '\0';
    return (dest);
}
