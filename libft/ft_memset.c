/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:47:37 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:47:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	int len2;

	i = 0;
	len2 = len;
	while (i < len2)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
