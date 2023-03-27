/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 08:53:58 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/17 16:23:57 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*tmp_s1;
	const unsigned char		*tmp_s2;
	unsigned int			i;

	if (n == 0)
		return (0);
	i = 0;
	tmp_s1 = s1;
	tmp_s2 = s2;
	while (tmp_s1[i] && tmp_s1[i] == tmp_s2[i] && i < n - 1)
		i++;
	return (tmp_s1[i] - tmp_s2[i]);
}
