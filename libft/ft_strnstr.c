/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:07 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 17:16:15 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *stack, char const *niddle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (niddle[j] == '\0')
		return ((char *)stack);
	while (stack[i] != '\0' && (i + j) < len)
	{
		while (stack[i + j] == niddle[j] && (i + j) < len)
		{
			j++;
			if (niddle[j] == '\0')
				return ((char *)stack + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
