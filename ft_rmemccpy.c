/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmemccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <eroxin79@mail.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:08:11 by gcyndi            #+#    #+#             */
/*   Updated: 2021/04/20 01:14:46 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*new;
	const char	*orgnl;

	i = 0;
	new = dest;
	orgnl = src;
	while (i < n)
	{
		new[i] = orgnl[i];
		if (new[i] == c)
		{
			i++;
			return (&new[i]);
		}
		i++;
	}
	return (NULL);
}
