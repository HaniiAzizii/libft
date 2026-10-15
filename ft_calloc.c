#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t  full_size;

    full_size = nmemb * size;
    if (nmemb == 0 || size == 0)
    return (malloc(0));
    ptr = malloc(full_size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, full_size);
    return (ptr);
}
/*#include <stdio.h>
#include <stdlib.h>
int main ()
{
int *p;
p = ft_calloc(1, sizeof(int));
printf("%d\n", *p);
free(p);
return 0;
}*/
