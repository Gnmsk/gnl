/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrejoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 17:42:41 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 18:21:13 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrejoin(char **s1, char const *s2)
{
	int		i;
	int		strlen;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strlen = (ft_strlen(*s1) + ft_strlen(s2) + 1);
	tmp = (char *)malloc(strlen);
	i = 0;
	if (tmp)
	{
		while (*(s1[i]) != '\0')
		{
			tmp[i] = *(s1[i]);
			i++;
		}
		while (*s2 != '\0')
			tmp[i++] = *s2++;
		tmp[i] = '\0';
		ft_strdel(s1);
		return (tmp);
	}
	return (NULL);
}
