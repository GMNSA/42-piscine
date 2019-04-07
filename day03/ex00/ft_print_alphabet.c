// Text File
// AUTHOR:   _who
// FILE:     ft_print_alphabet.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 14:22:21
// MODIFIED: 2019-04-07 15:43:17

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    start;
    char    stop;
    char    temp;


    start = 122;
    stop = 97;
    temp = start;
    while (temp != (stop - 1))
    {
        ft_putchar(temp);
        temp -= 1;
    }
}
