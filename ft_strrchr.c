/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:40:59 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/15 10:27:39 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		temp;
	char	*result;

	i = 0;
	temp = -1;
	while (s[i])
	{
		if (s[i] == c)
			temp = i;
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	else if (temp == -1)
		return (result = NULL);
	return ((char *) &s[temp]);
}
