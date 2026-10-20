#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*nptr == ' '  || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    if (*nptr == '-' || *nptr == '+')
        {
            if (*nptr == '-')
                sign = -1;
            nptr++;
        }
    while (*nptr >= '0' && *nptr <= '9')
    {
        res = res * 10 + (*nptr - '0');
        nptr++;
    }
    return (res * sign);
   
}
/*
#include <stdio.h>
int main ()
{
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("42withwords"));
    printf("%d\n", ft_atoi("----42 and spaces"));
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("- + 42"));

}*/