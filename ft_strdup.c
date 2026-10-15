#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  len;
    size_t  i;

    len = ft_strlen(s);
    dup =(char *) malloc((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

#include <stdio.h>

int main()
{
    char *str = "Hello, World!";
    char *dup = ft_strdup(str);
    if (dup)
    {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", dup);
        free(dup);
    }
    return 0;
}
