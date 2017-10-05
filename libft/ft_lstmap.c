/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:43:47 by dhuynh            #+#    #+#             */
/*   Updated: 2017/07/10 19:47:01 by dhuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *sort;

	if (lst)
	{
		sort = f(lst);
		sort->next = ft_lstmap(lst->next, f);
		return (sort);
	}
	return (NULL);
}
