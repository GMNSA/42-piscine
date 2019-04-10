// Text File
// AUTHOR:   _who
// FILE:     ft_str_is_lowercase.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 10:58:52
// MODIFIED: 2019-04-10 13:40:13

int     check_low(char c)
{
    return (c >= 'a' && c <= 'z');
}

int     ft_str_is_lowercase(char *str)
{
    int     i;
    int     sign;

    sign = 0;
    i = 0;
    while (str[i])
    {
        if (!check_low(str[i]))
            sign = 1;
        i += 1;
    }
    if (!sign)
        return (1);
    return (0);
}
