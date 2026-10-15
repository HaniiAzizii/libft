#include "libft.h"

int count_digits(long n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while (n >0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char *str;
    long num;
    int len;

    num = n;
    len = count_digits(num);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num == 0)
        str[0] = '0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}
/*#include <stdio.h>
int main()
{
    int n = -12345;
    char *str = ft_itoa(n);
   
        printf("Integer: %d\n", n);
        printf("String: %s\n", str);
       
    return 0;
}*/
