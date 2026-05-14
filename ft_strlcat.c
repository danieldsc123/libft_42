/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danda-si <danda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:30:37 by danielda          #+#    #+#             */
/*   Updated: 2026/05/14 14:43:04 by danda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t1;
	size_t	t2;
	size_t	j;

	j = 0;
	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size == 0)
		return (t2);
	if (size <= t1)
		return (t2 + size);
	while (src[j] && t1 + i < size - 1)
	{
		dst[t1 + i] = src[j];
		i++;
		j++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
