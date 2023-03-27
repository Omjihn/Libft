/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:21:07 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/20 14:36:00 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	const char			*temp_s;

	if (!s)
		return (NULL);
	temp_s = s;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
