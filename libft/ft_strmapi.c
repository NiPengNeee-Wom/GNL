/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:50:26 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:50:27 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			j;
	unsigned int	i;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		str[j] = f(i, s[i]);
		i++;
		j++;
	}
	return (str);
}
