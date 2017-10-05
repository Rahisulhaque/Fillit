/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:19:48 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 22:08:39 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t i;
	size_t j;

	i = 0;
	if (!little[i])
		return (char*)big;
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && ((i + j) < l))
			j++;
		if (little[j] == '\0')
			return ((char*)(big + i));
		i++;
	}
	return (NULL);
}
