/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:51:21 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:51:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (*s)
		s++;
	while (i != 0)
	{
		if (*s == c)
			return ((char*)s);
		s--;
		i--;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
