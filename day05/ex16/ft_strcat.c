// Text File
// AUTHOR:   _who
// FILE:     ft_strcat.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 14:30:25
// MODIFIED: 2019-04-10 14:42:11

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i += 1;
    return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    int     cnt_dest;
    int     i;

    cnt_dest = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[cnt_dest + i] = src[i];
        i += 1;
    }
    dest[cnt_dest + i] = '\0';
    return (dest);
}
