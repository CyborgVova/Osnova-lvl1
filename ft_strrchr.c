/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <eroxin79@mail.ru>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 23:25:08 by gcyndi            #+#    #+#             */
/*   Updated: 2021/04/20 23:46:01 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char*)s;
	while (tmp[i])
		i++;
	if (c == '\0')
		return (&tmp[i]);
	while (i >= 0)
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i--;
	}
	return (NULL);
}
