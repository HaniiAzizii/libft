/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:50:43 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 14:53:09 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		t;

	p = (const unsigned char *)s;
	t = (unsigned char)c;
	while (n > 0)
	{
		if (*p == t)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
//#include <stdio.h>

/*int main()
{
    printf("%s",(char *)ft_memchr("Hello 42", '4',8));
}*/
