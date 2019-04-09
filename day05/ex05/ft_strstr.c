// Text File
// AUTHOR:   _who
// FILE:     ft_strstr.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 03:46:06
// MODIFIED: 2019-04-09 20:19:34

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;

    i = 0;
    while (str[i])
    {
        if (str[i] == to_find[0])
        {
            j = 1;
            while (to_find[j] && (str[i + j] == to_find[j]))
                j += 1;
            if (to_find[j] == '\0')
                return (&str[i]);
        }
        i += 1;
    }
    return (0);
}
