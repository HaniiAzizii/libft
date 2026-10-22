/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:09:20 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/22 14:43:38 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*b;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	b = malloc ((len + 1) * sizeof(char));
	if (!b)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		b[i] = s[start + i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
//#include <stdio.h>

/*int main()
{
    char *s = ft_substr("Hello 42", 6,2);
printf("%s", s);
}*/
