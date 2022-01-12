/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:51:14 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:51:15 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t n2;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && n)
	{
		i = 0;
		n2 = n;
		while (s1[i] == s2[i] && n2)
		{
			i++;
			if (!s2[i])
				return ((char *)s1);
			if (!s1[i])
				return (NULL);
			n2--;
		}
		s1++;
		n--;
	}
	return (NULL);
}
