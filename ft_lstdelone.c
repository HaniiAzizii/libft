#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}

#include <stdio.h>
int main()
{
    t_list *node = ft_lstnew("test");
    printf("Node content before deletion: %s\n", (char *)node->content);
    ft_lstdelone(node, free);
    return 0;
}