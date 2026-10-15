#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/*void test_function(unsigned int index, char *c)
{
    (void)index; 
    (*c)++;
}
#include <stdio.h>
int main()
{
    char str[] = "abc";
    ft_striteri(str, test_function);
    printf("%s\n", str); // Output: "bcd"
    return 0;
}*/