/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:19:04 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 23:30:16 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len != (char)c && len >= 0)
	{
		if ((s[len] == (char)(c)))
			return ((char *)&s[len]);
		len--;
	}
	if (c == '\0')
		return ((char *)&s[len]);
	return (NULL);
}
