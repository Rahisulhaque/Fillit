/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 02:12:22 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/05 01:02:42 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*search_and_replace(char *s, char f, char r, int n)
{
	char	*ptr;
	char	*ptrhold;

	ptr = ft_strdup(s);
	ptrhold = ptr;
	while (*ptr || n-- > 0)
	{
		if (*ptr == f)
			*ptr = r;
		ptr++;
	}
	ptr = ptrhold;
	return (ptr);
}
