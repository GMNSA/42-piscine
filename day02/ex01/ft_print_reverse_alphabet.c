// Text File | C
// AUTHOR:   _who
// FILE:     ft_print_reverse_alphabet.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-01 15:57:33
// MODIFIED: 2019-04-01 16:18:37

#include <unistd.h>

# define START 122
# define END 97

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = START;
    while (letter >= END)
        ft_putchar(letter--);
}
