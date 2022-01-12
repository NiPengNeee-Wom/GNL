/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:46:31 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:46:32 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *str;
	unsigned char *src2;

	str = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n-- && *src2 != (unsigned char)c)
	{
		*str = *src2;
		str++;
		src2++;
	}
	if (*src2 == (unsigned char)c)
	{
		*str = *src2;
		str++;
		return (str);
	}
	else
		return (NULL);
}
