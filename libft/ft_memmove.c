/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:47:32 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:47:32 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst2;

	dst2 = (unsigned char *)dst;
	if (dst < src)
	{
		while (len--)
		{
			*(unsigned char *)dst2 = *(unsigned char *)src;
			dst2++;
			src++;
		}
	}
	else if (dst == src)
		return (dst);
	else
	{
		while (len--)
		{
			*((unsigned char *)dst2 + len) = *((unsigned char *)src + len);
		}
	}
	return (dst);
}
