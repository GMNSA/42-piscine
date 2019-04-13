// Text File
// AUTHOR:   _who
// FILE:     ft_strlcat.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-11 01:42:40
// MODIFIED: 2019-04-13 04:53:54

unsigned int        ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int     i;
    int              j;
    int              res;

    i = 0;
    while (dest[i])
        i += 1;
    res = 0;
    while (src[res])
        res += 1;

    if (size <= i)
        res += size;
    else
        res += i;
    j = 0;
    while (src[j] && i < size)
    {
        dest[i] = src[j];
        i += 1;
        j += 1;
    }
    dest[i] = '\0';
    return (res);
}
