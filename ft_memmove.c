/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <eroxin79@mail.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:41:13 by gcyndi            #+#    #+#             */
/*   Updated: 2021/04/18 14:10:53 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*new;
	const char	*orgnl;

	i = 0;
	new = dest;
	orgnl = src;
	if (dest > src)
	{
		while (n-- > i)
			new[n] = orgnl[n];
	}
	else
	{
		while (i++ < n)
			*(char*)dest++ = *(char*)src++;
	}
	return (dest);
}
