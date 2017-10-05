/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:46:37 by dhuynh            #+#    #+#             */
/*   Updated: 2017/06/29 02:57:28 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char uc;

	uc = (unsigned char)c;
	str = (unsigned char*)s;
	while (n--)
	{
		if (*str == uc)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
