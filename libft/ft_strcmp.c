/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:49:13 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:49:13 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 && str2)
	{
		i = 0;
		while (str1[i] || str2[i])
		{
			if (str1[i] == str2[i])
				i++;
			else if (str1[i] > str2[i])
				return (1);
			else if (str1[i] < str2[i])
				return (-1);
		}
	}
	return (0);
}
