/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:09:53 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 17:50:47 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char const *src, size_t i)
{
	size_t j;
	size_t k;

	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	if (dest[j] == '\0')
	{
		while (src[k] && i > 0)
		{
			dest[j] = src[k];
			j++;
			k++;
			i--;
		}
	}
	dest[j] = '\0';
	return (dest);
}
