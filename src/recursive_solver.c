/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_solver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 01:24:40 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/05 00:51:40 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		recursive_solve(t_grid *grid, int *int_array, int num)
{
	int		pos;
	int		len;

	pos = 0;
	len = grid->size * grid->size;
	if (int_array[num] == 27)
		return (1);
	while (pos < len)
	{
		if (what_function(grid, int_array[num], pos, ALPHABET[num]))
		{
			if (recursive_solver(grid, int_array, num + 1))
				return (1);
			what_cleartet(grid, int_array[num], pos);
		}
		pos++;
	}
	return (0);
}
