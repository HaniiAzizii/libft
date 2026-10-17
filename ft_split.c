/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:17:43 by haazizi           #+#    #+#             */
/*   Updated: 2026/10/17 15:17:45 by haazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count(char const *s, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (s[i])
    {
          if (s[i] != c)
         {
            count++;
            while (s[i] && s[i] != c)
                i++;
         }
         else
            i++;
    }
    return (count);
}

static char *get_word(char const *s, int start, int end)
{
    char *word;
    int i;

    word = malloc((end - start + 1) * sizeof(char));
    if (!word)
        return (NULL);
    i = 0;
    while (start < end)
    {
        word[i] = s[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **result;
    int     i;
    int     j;
    int     start;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    result = malloc((count(s, c) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
     while (s[i])
        {
            if (s[i] != c)
            {
                start = i;
                while (s[i] && s[i] != c)
                    i++;
                result[j] = get_word(s, start, i);
                if (!result[j])
                {
                    while (j > 0)
                        free(result[--j]);
                    free(result);
                    return (NULL);
                }
                j++;
            }
            else
                i++;
        }
        result[j] = NULL;
        return (result);
}
//#include <stdio.h>

/*int main ()
{
    char **result = ft_split("Hello 42 World", ' ');
    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    return 0;
}*/
