/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 15:46:26 by yplag             #+#    #+#             */
/*   Updated: 2015/03/12 15:46:26 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	if (!size)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size)
	{
		str[i] = 0;
		i++;
		size--;
	}
	return ((void *)str);
}
