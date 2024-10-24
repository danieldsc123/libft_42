/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielda <danielda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:40:52 by danielda          #+#    #+#             */
/*   Updated: 2024/10/23 18:40:30 by danielda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_adrielda(unsigned int i, char *c)
{
	while(*c)
	{
		printf("%d", i);	
		printf("%s\n", c);
		c++;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
/*
int main()
{
	char srt[] = "daniel";
	ft_striteri(srt,ft_adrielda(2, srt));
	printf("%s\n", srt);
	return 0;
}
*/