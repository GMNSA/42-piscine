/* ft_print_words_tables.c */

#include <stdlib.h>
#include <unistd.h>


// -------------------------------------------------------------------------

void        ft_print_words_tables(char **tab);
void        ft_putchar(char c);
void        ft_putstr(char *str);

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
