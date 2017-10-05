/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:45:02 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 17:03:55 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*cdest;
	unsigned char const	*csrc;

	cdest = (unsigned char*)dst;
	csrc = (unsigned char const*)src;
	while (n--)
	{
		*cdest = *csrc;
		if (*csrc == (unsigned char)(c))
			return (cdest + 1);
		cdest++;
		csrc++;
	}
	return (NULL);
}
