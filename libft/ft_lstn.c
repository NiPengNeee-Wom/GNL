/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:45:49 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:45:53 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstn(t_lst **tmp1, t_lst **tmp2, int ox, int n)
{
	int		i;
	t_lst	*tmp;

	if (!tmp1)
		return (0);
	tmp = *tmp1;
	i = 0;
	tmp = tmp->next;
	while (i < n && tmp->ox != ox && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp->ox == ox)
	{
		*tmp2 = tmp;
		return (1);
	}
	return (0);
}
