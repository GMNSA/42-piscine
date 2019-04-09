// Text File
// AUTHOR:   _who
// FILE:     ft_strcmp.c
// ROLE:     TODO (some explanation)
// CREATED:  2019-04-09 20:20:31
// MODIFIED: 2019-04-09 20:32:07

int     ft_strcmp(char *s1, char *s2)
{
   int      i; 

   i = 0;
   while (s1[i] && s2[i])
   {
       if (s1[i] != s2[i])
           return (s1[i] - s2[i]);
       i += 1;
   }
   return (0);
}
