/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 22:40:43 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/09 17:12:56 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	char	*head;
	int		tail;
	int		count;

	if (!s)
		return (NULL);
	count = 0;
	head = (char *)s;
	tail = ft_strlen(s);
	while ((*head == '\t') || (*head == '\n') || (*head == ' '))
	{
		head++;
		count++;
	}
	while (--tail)
	{
		if ((s[tail] != '\t') && (s[tail] != '\n') && (s[tail] != ' '))
			break ;
	}
	trim = ft_strndup(head, tail - count + 1);
	return (trim);
}
