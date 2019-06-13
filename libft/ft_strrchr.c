/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:11:11 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/12 21:13:08 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *src, char a)
{
	char *s;

	s = (char *)src;
	while (*s)
		s++;
	while (s >= src)
	{
		if (*s == a)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
