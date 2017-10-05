/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 13:25:37 by dhuynh            #+#    #+#             */
/*   Updated: 2017/06/29 00:38:11 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;

	d = dst;
	if (!len)
		return (dst);
	while (*src != '\0' && len)
	{
		*dst++ = *src++;
		len--;
	}
	while (len)
	{
		*dst++ = '\0';
		len--;
	}
	return (d);
}
