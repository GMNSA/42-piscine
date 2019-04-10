// Text File
// AUTHOR:   _who
// FILE:     ft_str_is_uppercase.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 13:41:37
// MODIFIED: 2019-04-10 13:45:41

int     check_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int     ft_str_is_uppercase(char *str)
{
    int         i;
    int      sign;

    i = 0;
    sign = 0;
    while (str[i])
    {
        if (!check_upper(str[i]))
            sign = 1;
        i += 1;
    }
    if (!sign)
        return (1);
    return (0);
}
