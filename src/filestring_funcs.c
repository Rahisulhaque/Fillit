/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestring_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <dhuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 00:55:37 by dhuynh            #+#    #+#             */
/*   Updated: 2017/10/04 02:22:41 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				get_num_tets(char *fs)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (fs[i])
	{
		if (fs[i] == '\n' && (fs[i + 1] == '\n' || !(fs[i + 1])))
			count++;
		i++;
	}
	return (count);
}

static char		*get_tet_string(char *fs, int num)
{
	char	*tmp;
	char	*tmp2;
	char	*tmp3;
	int		i;

	i = -1;
	if (!(tmp = ft_strnew(20)))
		return (NULL);
	fs += (21 * num);
	while (++i < 21)
	{
		tmp[i] = *fs;
		fs++;
	}
	tmp2 = search_and_replace(tmp, '\n', '.', 21);
	tmp3 = trim_dots(tmp2);
	free(tmp);
	free(tmp2);
	return (tmp3);
}

int				*get_int_array(char *fs)
{
	char	*tmp;
	int		i;
	int		num;
	int		*int_array;

	num = get_num_tets(fs);
	int_array = (int *)malloc(sizeof(int) * (num + 1));
	i = 0;
	while (i < num)
	{
		tmp = get_tet_string(fs, i);
		int_array[i] = what_tet(tmp);
		free(tmp);
		i++;
	}
	int_array[i] = 27;
	return (int_array);
}

char			*read_file(char *filename)
{
	int		fd;
	char	*buf;
	char	*new_buf;

	buf = ft_strnew(BUFF);
	if ((fd = open(filename, 0_RDONLY)) == -1)
		buf = ft_strcpy(buf, "error");
	else
	{
		read(fd, buf, BUFF);
		close(fd);
	}
	new_buf = ft_strdup(buf);
	free(buf);
	return (new_buf);
}
