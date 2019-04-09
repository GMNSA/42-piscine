// Text File
// AUTHOR:   _who
// FILE:     ft_strcpy.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 03:02:49
// MODIFIED: 2019-04-09 03:11:49

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (dest[i] != '\0' && src[i] != '\0')
    {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
