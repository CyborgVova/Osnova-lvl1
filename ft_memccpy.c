/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <eroxin79@mail.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:21:49 by gcyndi            #+#    #+#             */
/*   Updated: 2021/04/20 00:55:23 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*(char*)dest++ = *(char*)src++;
		if (*(char*)src == c)
		{
			dest++;
			return (dest);
		}
		i++;
	}
	return (NULL);
}
