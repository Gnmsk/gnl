/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:06:25 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 17:30:32 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		strlen;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strlen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	tmp = (char *)malloc(strlen);
	i = 0;
	if (tmp)
	{
		while (*s1 != '\0')
			tmp[i++] = *s1++;
		while (*s2 != '\0')
			tmp[i++] = *s2++;
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
