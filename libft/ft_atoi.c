/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:25:24 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 16:53:14 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int is_negative;

	i = 0;
	nb = 0;
	is_negative = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (is_negative == 1)
		return (-nb);
	else
		return (nb);
}
