/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 02:32:02 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/12 02:20:58 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		is_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

static int		ft_digitlen(int n)
{
	int		digits;
	int		i;

	digits = 1;
	i = 1;
	while (n / i > 9)
	{
		i *= 10;
		digits++;
	}
	return (digits);
}

char			*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	is_neg(&n, &neg);
	len = ft_digitlen(n) + neg;
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n == 0)
		s[0] = '0';
	s[len] = '\0';
	while (n)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
