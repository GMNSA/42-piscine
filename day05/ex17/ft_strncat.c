// Text File
// AUTHOR:   _who
// FILE:     ft_strncat.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-10 14:43:29
// MODIFIED: 2019-04-11 01:37:42

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i += 1;
    return (i);
}

char    *ft_strncat(char *dest, char *src, int nb)
{
    int     i;
    int     cnt_dest;

    i = 0;
    cnt_dest = ft_strlen(dest);
    while (src[i] != '\0' && i < nb)
    {
        dest[cnt_dest + i] = src[i];
        i += 1;
    }
    dest[cnt_dest + i] = '\0';
    return (dest);
}
