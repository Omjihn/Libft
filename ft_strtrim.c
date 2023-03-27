/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:08:21 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/19 09:57:06 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	int				j;
	char			*res;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && ft_is_in_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 1 && ft_is_in_set(s1[j], set) == 1)
		j--;
	if (j - i + 1 < 1)
		return (res = (char *) ft_calloc(1, 1));
	res = (char *) ft_calloc((j - i) + 2, sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1 + i, j - i + 2);
	return (res);
}
