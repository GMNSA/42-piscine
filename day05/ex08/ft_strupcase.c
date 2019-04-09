// Text File
// AUTHOR:   _who
// FILE:     ft_strupcase.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 20:45:59
// MODIFIED: 2019-04-09 21:02:43

char    *ft_strupcase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i += 1;
    }
    return (str);
}
