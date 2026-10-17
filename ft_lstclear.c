/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:56:25 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 15:57:27 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
int main()
{
    t_list *head = ft_lstnew("Node 1");
    head->next = ft_lstnew("Node 2");
    head->next->next = ft_lstnew("Node 3");

    printf("List size before clear: %u\n", ft_lstsize(head)); 
    ft_lstclear(&head, free);
    printf("List size after clear: %u\n", ft_lstsize(head)); 

    return 0;
}*/
