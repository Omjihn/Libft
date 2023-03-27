/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:20:42 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/24 13:45:24 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_len(int n)
{
	int			i;
	long int	div;

	i = 0;
	div = 1;
	if (n <= 0)
	{
		i++;
		div *= -1;
	}
	while (n / div > 0)
	{
		div *= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr_str(int n, char *res, int len)
{
	len--;
	if (n >= 10)
	{
		res[len] = (n % 10) + 48;
		len--;
	}
	else if (n < 10)
		res[len] = n + 48;
	while (n >= 10)
	{
		n /= 10;
		res[len] = (n % 10) + 48;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_cnt_len(n);
	res = (char *) ft_calloc(sizeof(char), len + 1);
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	ft_putnbr_str(n, res, len);
	return (res);
}
