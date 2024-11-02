/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielda <danielda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:25:27 by danielda          #+#    #+#             */
/*   Updated: 2024/11/02 18:03:59 by danielda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
int	count_words(char const *s, char c)
{
	int	count;
	int	words;

	count = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && words == 0)
		{
			words = 1;
			count++;
		}
		else if (*s == c)
		{
			words = 0;
		}
		s++;
	}
	return (count);
}
static char *word_dup(const *start, const char *end)
{
	size_t len = end - start
	char *new_str;

	new_str = (char *)malloc(len + 1)
	if (!new_str)
	free_split()
		return (NULL);
	ft_strlcpy (new_str, start,len)
	new_str[len] = '\0';
	return (new_str);
}
static void	free_split(char **result, int words)
{
	if (result == NULL)
	{
		(return);
	}
	while (words > 0)
	{
		free(result[words - 1]);
		words--;
	}
	free(result);
}
char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	int words = count_words(s,c)
}