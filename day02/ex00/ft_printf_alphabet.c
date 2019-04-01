// Text File | C
// AUTHOR:   _who
// FILE:     ft_printf_alphabet.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-01 15:57:33
// MODIFIED: 2019-04-01 16:03:27

#include <unistd.h>

# define START 97
# define END 122

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    letter;

    letter = START;
    while (letter <= END)
        ft_putchar(letter++);
}
