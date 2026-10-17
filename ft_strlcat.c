/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:43:45 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/14 16:46:30 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	i;

	s = 0;
	d = 0;
	i = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		return (size + s);
	while (src[i] != '\0' && (d + i) < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
//#include <stdio.h>

/*int main ()
{
	size_t ret;
	
	char dest [20] = "hello";
	ret = ft_strlcat(dest, "world",50);
	printf("%zu",ret);
}*/
