/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:14:59 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/08 01:42:05 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s)
	{
		i = 0;
		if (!(substr = (char *)malloc(len + 1)))
			return (NULL);
		while (i < len)
		{
			substr[i] = s[start];
			i++;
			start++;
		}
		substr[len] = '\0';
		return (substr);
	}
	return (0);
}
