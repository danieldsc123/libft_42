/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielda <danielda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:37:30 by danielda          #+#    #+#             */
/*   Updated: 2024/10/28 15:12:35 by danielda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*copy;
	int			i;
	int			dest;

	i = 0;
	dest = 0;
	while (s[dest] != '\0')
	{
		dest++;
	}
	copy = (char *)malloc((dest + 1) * sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	while (i < dest)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
