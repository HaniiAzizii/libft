/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:52:10 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 15:52:47 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
    t_list *lst;
    lst = ft_lstnew("Node 1");
    lst->next = ft_lstnew("Node 2");
    lst->next->next = ft_lstnew("Node 3");

    t_list *last_node = ft_lstlast(lst);
    printf("Last node content: %s\n", (char *)last_node->content); 
    return 0;
}*/
