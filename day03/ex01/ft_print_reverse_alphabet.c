// Text File
// AUTHOR:   _who
// FILE:     ft_print_reverse_alphabet.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 15:45:53
// MODIFIED: 2019-04-07 15:46:13


#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
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
