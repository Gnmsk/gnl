/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:03:22 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 15:30:17 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = ((char *)malloc(sizeof(char) * (len + 1)));
	if (dest == NULL)
		return (0);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
