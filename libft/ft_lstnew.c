/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:46:00 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:46:01 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstnew(int size, int ox, double x, double y)
{
	t_lst *new;

	if (!(new = malloc(sizeof(t_lst))))
		return (NULL);
	new->size = size;
	new->x = x;
	new->y = y;
	new->ox = ox;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
