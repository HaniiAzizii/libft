/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:47:27 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/22 13:48:26 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <stdio.h>
int main()
{
    char *str = "Hello World";
    printf("%s\n",ft_strrchr(str,'o'));
    printf("%s\n",ft_strrchr(str,'\0'));
    printf("%s",ft_strrchr(str,'z'));

}*/
