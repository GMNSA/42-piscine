// Text File
// AUTHOR:   _who
// FILE:     ft_str_is_numeric.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 10:50:59
// MODIFIED: 2019-04-10 10:57:22

int     check_num(char c)
{
    return (c >= '0' && c <= '9');
}

int     ft_str_is_numeric(char *str)
{
    int     i;
    int     sign;

    i = 0;
    sign = 0;
    while (str[i])
    {
        if (!check_num(str[i]))
            sign = 1;
        i += 1;
    }
    if (!sign)
        return (1);
    return (0);
}
