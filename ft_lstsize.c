#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}

#include <stdio.h>
int main()
{
    t_list *lst;
    lst = ft_lstnew("Node 1");
    lst->next = ft_lstnew("Node 2");

    printf("List size: %u\n", ft_lstsize(lst)); 
    return 0;
}