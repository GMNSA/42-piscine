// Text File
// AUTHOR:   _who
// FILE:     ft_strrev.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-07 16:49:45
// MODIFIED: 2019-04-07 17:05:58

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i += 1;
    return (i);
}

char    *ft_strrev(char *str)
{
    int     end;
    int     middle;
    int     start;
    char    temp;
    int     count;

    count = ft_strlen(str) - 1;
    end = count;
    middle = end / 2 + 1;
    start = 0;

    while (start < middle)
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start += 1;
        end -= 1;
    }
    str[count + 1] = '\0';

    return (str);
}
