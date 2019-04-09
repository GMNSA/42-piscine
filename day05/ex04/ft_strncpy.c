// Text File
// AUTHOR:   _who
// FILE:     ft_strncpy.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 03:26:24
// MODIFIED: 2019-04-09 03:43:36

char        *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int     i;

    i = 0;
    while ((dest[i] != '\0' || src[i] != '\0') && n)
    {
        dest[i] = src[i];
        i += 1;
        n--;
    }
    dest[i] = '\0';
    return (dest);
}
