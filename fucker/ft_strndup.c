/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 04:39:49 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 17:08:44 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*output;
	size_t	len;
	size_t	val;

	len = ft_strlen(s1);
	if (len <= 0)
		return (ft_memalloc(1));
	val = (len < n) ? len : n;
	if ((output = (char*)ft_memalloc(val + 1)) == NULL)
		return (NULL);
	ft_strncpy(output, s1, val);
	return (output);
}
