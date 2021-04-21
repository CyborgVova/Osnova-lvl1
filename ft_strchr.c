/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <eroxin79@mail.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 23:03:34 by gcyndi            #+#    #+#             */
/*   Updated: 2021/04/20 00:57:31 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (s[i])
	{
		tmp[i] = s[i];
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	if (tmp[i] == c)
		return (&tmp[i]);
	return (NULL);
}
