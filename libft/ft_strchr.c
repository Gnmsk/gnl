/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:01:48 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 17:26:58 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *src, char a)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == a)
			return ((char *)src + i);
		i++;
	}
	if (!a && src[i] == '\0')
		return ((char *)src + i);
	return (NULL);
}
