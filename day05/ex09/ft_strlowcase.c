// Text File
// AUTHOR:   _who
// FILE:     ft_strlowcase.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 21:03:30
// MODIFIED: 2019-04-09 21:07:48

char        *ft_strlowcase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i += 1;
    }
    return (str);
}
