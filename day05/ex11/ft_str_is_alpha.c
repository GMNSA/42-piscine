// Text File
// AUTHOR:   _who
// FILE:     ft_str_is_alpha.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 10:42:43
// MODIFIED: 2019-04-10 10:49:38

#include <stdio.h>

int     check_alphabet(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int     ft_str_is_alpha(char *str)
{
    int     i;
    int     sign;

    i = 0;
    sign = 0;
    while (str[i])
    {
        if (!check_alphabet(str[i]))
            sign = 1;
        i += 1;
    }
    if (!sign)
        return (1);
    return (0);
}
