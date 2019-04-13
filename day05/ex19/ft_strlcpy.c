// Text File
// AUTHOR:   _who
// FILE:     ft_strlcpy.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-13 04:55:25
// MODIFIED: 2019-04-13 05:18:01

unsigned int        ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    count;

    count = 0;
    i = 0;
    while (src[count])
        count += 1;
    while ((dest[i] != 0 || src[i] != 0) && size > 0)
    {
        dest[i] = src[i];
        i += 1;
        size -= 1;
    }
    dest[i] = '\0';
    return (count);
}
