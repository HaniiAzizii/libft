#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *trim;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    trim = malloc((end - start + 1) * sizeof(char));
    if (!trim)
        return (NULL);
    ft_strlcpy(trim, s1 + start, end - start + 1);
    return (trim);
}
//#include <stdio.h>

/*int main()
{
    printf("%s",ft_strtrim("---abc---","-"));
    return (0);
}*/