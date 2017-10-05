/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 14:38:48 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 21:29:12 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (size < dstlen + 1)
		return (ft_strlen(src) + size);
	if (size > ft_strlen(dst) + 1)
	{
		while (i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
