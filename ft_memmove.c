/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:37:26 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/10 11:47:00 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*temp_dest;
	unsigned const char		*temp_src;
	unsigned int			i;

	temp_src = src;
	temp_dest = dest;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	i = n - 1;
	while (i + 1 > 0)
	{
		temp_dest[i] = temp_src[i];
		i--;
	}
	return (dest);
}
