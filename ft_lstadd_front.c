/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:49:52 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 15:50:35 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main()
{
    t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Node 1");
    t_list *new_node2 = ft_lstnew("Node 2");

    ft_lstadd_front(&head, new_node1);
    ft_lstadd_front(&head, new_node2);

   printf("Head content: %s\n", (char *)head->content);
   printf("next node content: %s\n", (char *)head->content);

    return 0;
}*/
