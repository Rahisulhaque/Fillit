/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:45:02 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 17:07:57 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	unsigned const char	*csrc;

	cdest = (unsigned char*)dest;
	csrc = (unsigned const char*)src;
	while (n--)
	{
		*cdest++ = *csrc++;
	}
	return (dest);
}
