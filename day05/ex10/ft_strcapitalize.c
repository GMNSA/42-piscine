// Text File
// AUTHOR:   _who
// FILE:     ft_strcapitalize.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 21:11:02
// MODIFIED: 2019-04-10 10:41:00

int     check_alphabet(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int     check_low(char c)
{
    return (c >= 'a' && c <= 'z');
}

int     check_space(char c)
{
    return (c == 32 || (c >= 9 && c <= 13 ) || (c == '-' || c == '+'));
}

char        *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;
    while (!check_alphabet(str[i]))
        i += 1;
    if (check_low(str[i]))
    {
        str[i] -= 32;
        i += 1;
    }

    while (str[i])
    {
        if (check_alphabet(str[i]))
        {
            if (check_space(str[i - 1]) && check_low(str[i]))
                str[i] -= 32;
            else if (!check_low(str[i]))
                str[i] += 32;
        }
        i += 1;
    }
    return (str);
}
