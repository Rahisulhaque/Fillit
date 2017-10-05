/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t10.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 21:19:56 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/05 00:38:31 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet10(t_grid *grid, int start)
{
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	i = grid->size;
	tmp = grid->content;
	if (start % i > i - 4)
		return (0);
	if (start + 3 > ((i * i) - 1))
		return (0);
	tmp += start;
	while (j < 4)
	{
		if (tmp[j] != '.')
			return (0);
		j++;
	}
	return (1);
}

int		place_tet10(t_grid *grid, int start, char c)
{
	char	*tmp;
	int		i;

	tmp = grid->content;
	if (check_tet10(grid, start))
	{
		tmp += start;
		i = -1;
		while (++i < 4)
			tmp[i] = c;
		return (1);
	}
	return (0);
}

void	clear_tet10(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	tmp = grid->content;
	tmp += start;
	i = -1;
	while (++i < 4)
		tmp[i] = '.';
	return ;
}
