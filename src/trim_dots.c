/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_dots.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 02:23:35 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/05 01:02:53 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned int	check_space(char const *s)
{
	unsigned int i;

	i = 0;
	while (s[i] == '.')
		i++;
	return (i);
}

char			*trim_dots(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (s)
	{
		i = check_space(s);
		if (s[i] == '\0')
			return (ft_strnew(1));
		j = (unsigned int)ft_strlen(s) - 1;
		while (s[j] == '.')
			j--;
		if (!(str = ft_strsub(s, i, (j - i + 1))))
			return (NULL);
	}
	else
		str = NULL;
	return (str);
}
