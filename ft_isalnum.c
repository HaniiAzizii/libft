/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:26:20 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/14 14:36:56 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

//#include <stdio.h>

/*int main()
{
	printf("%d\n",ft_isalnum('7'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('B'));
	printf("%d\n",ft_isalnum('*'));
}*/
