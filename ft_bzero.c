/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:14:02 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/14 17:27:49 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero( void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
//#include <stdio.h>
/*
int main ()
{
	char buf [10] = "12345";
	ft_bzero(buf,5);
	printf("%s",buf);
	printf("%d",buf[0]);
	printf("%d",buf[1]);
	printf("%d",buf[2]);
	printf("%d",buf[3]);
	printf("%d",buf[4]);
}*/
