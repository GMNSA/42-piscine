// Text File
// AUTHOR:   _who
// FILE:     ft_strlen.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 16:45:48
// MODIFIED: 2019-04-07 16:48:00

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i += 1;

    return (i);
}
