/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:53:16 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 15:54:47 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back( t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
/*
#include <stdio.h>
int main()
{
    t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Node 1");
    t_list *new_node2 = ft_lstnew("Node 2");

    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);

    printf("Head content: %s\n", (char *)head->content);
    printf("Next node content: %s\n", (char *)head->next->content);

    return 0;
}*/
