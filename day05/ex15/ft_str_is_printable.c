// Text File
// AUTHOR:   _who
// FILE:     ft_str_is_printable.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 14:12:29
// MODIFIED: 2019-04-10 14:29:11

# define START   32
# define END     126

int         ft_str_is_printable(char *str)
{
    int     i;
    int     sign;

    i = 0;
    sign = 0;
    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
            sign = 1;
        i += 1;
    }
    if (!sign)
        return (1);
    return (0);
}
