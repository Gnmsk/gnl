/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:54:37 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 15:55:12 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
		{
			*d = *s;
			d++;
			return (d);
		}
		d++;
		s++;
		i++;
	}
	return (NULL);
}
