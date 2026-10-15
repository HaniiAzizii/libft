#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *join;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!join)
        return (NULL);

    i = 0;
        while (s1[i])
        {
            join[i] = s1[i];
            i++;
        }
        j = 0;
        while (s2[j])
        {
            join[i + j] = s2[j];
            j++;
        }
        join[i + j] = '\0';
        return  (join);
}
//#include <stdio.h>

/*int main ()
{
    printf("%s", ft_strjoin("Hello ", "42"));
    return (0);
}*/