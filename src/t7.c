/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t7.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 21:19:56 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/05 00:21:12 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet7(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	i = grid->size;
	tmp = grid->content;
	if (start % i == i - 1)
		return (0);
	if ((start + 1 + i + i) > ((i * i) - 1))
		return (0);
	tmp += start;
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	tmp += i;
	if (*tmp != '.')
		return (0);
	tmp += i;
	if (*tmp != '.')
		return (0);
	return (1);
}

int		place_tet7(t_grid *grid, int start, char c)
{
	char *tmp;

	tmp = grid->content;
	if (check_tet7(grid, start))
	{
		tmp += start;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp += grid->size;
		*tmp = c;
		tmp += grid->size;
		*tmp = c;
		return (1);
	}
	return (0);
}

void	clear_tet7(t_grid *grid, int start)
{
	char *tmp;

	tmp = grid->content;
	tmp += start;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp += grid->size;
	*tmp = '.';
	tmp += grid->size;
	*tmp = '.';
	return ;
}
