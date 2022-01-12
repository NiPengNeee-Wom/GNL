/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:51:41 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:51:42 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;
	size_t		j;

	j = 0;
	i = start;
	if (len == 1 && !s && start == 0)
	{
		str = ft_strnew(1);
		str[j] = '\0';
		return (str);
	}
	if (!s || !len)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (len-- && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
