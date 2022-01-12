/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:50:46 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:50:47 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i != n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i != n && !src[i])
	{
		while (i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
