/* ft_print_words_tables.c */

#include <stdlib.h>
#include <unistd.h>

#define         OUT     0
#define         IN      1

// -------------------------------------------------------------------------

int         count_words(const char *str);
int         count_next_let(char *str);
int         is_blank(char c);
char        *ft_strncpy(char *dest, const char *source, unsigned size);
char        **ft_split_whitespaces(char *str);
int         ft_strlen(const char *str);
void        ft_print_words_tables(char **tab);
void        ft_putchar(char c);
void        ft_putstr(char *str);

// -------------------------------------------------------------------------

int         count_words(const char *str)
{
    int     i;
    int     sign = IN;
    int     words;

    words = 0;
    i = 0;
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

// -------------------------------------------------------------------------

int         count_next_let(char *str)
{
    int     i;

    i = 0;
    while (!is_blank(str[i]) && str[i])
        ++i;
    return (i);
}

// -------------------------------------------------------------------------

int         is_blank(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

// -------------------------------------------------------------------------

char        *ft_strncpy(char *dest, const char *source, unsigned size)
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

// -------------------------------------------------------------------------

char        **ft_split_whitespaces(char *str)
{
    char    **temp;
    int     i;
    int     j;
    int     count_let;

    if (!(temp = (char **)malloc(sizeof(temp) * (count_words(str)))))
        return (NULL);
    count_let = 0;
    j = 0;
    i = 0;
    while (str[i])
    {
        if (!is_blank(str[i]) && !count_let)
        { 
            count_let = count_next_let(&str[i]);
            if (!(temp[j] = (char *)malloc(sizeof(temp) * (count_let + 1))))
                return (NULL);
            ft_strncpy(temp[j], &str[i], count_let);
            j++;
        }
        else if (is_blank(str[i]))
            count_let = 0;
        ++i;
    }
    return (temp);
}

// -------------------------------------------------------------------------

int         ft_strlen(const char *str)
{
    int     i;
    
    i = 0;
    while (str[i])
        ++i;
    return (i);
}

// -------------------------------------------------------------------------

void        ft_print_words_tables(char **tab)
{
    int         i;

    i = 0;
    if (tab)
    {
        while (tab[i])
        {
            ft_putstr(tab[i]);
            ft_putchar('\n');
            ++i;
        }
    }
}

// -------------------------------------------------------------------------

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

// -------------------------------------------------------------------------

void        ft_putstr(char *str)
{
    int         i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        ++i;
    }
}
