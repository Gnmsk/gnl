/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:14:20 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 17:39:05 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skipchar(char c)
{
	if (c == ' ' || c == ',' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char		*ns;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (ft_skipchar(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(2), ""));
	len = ft_strlen(s) - 1;
	while (ft_skipchar(s[len]))
		len--;
	if (!(ns = (char *)malloc(len - i + 2)))
		return (NULL);
	while (j < len - i + 1)
	{
		ns[j] = s[i + j];
		j++;
	}
	ns[j] = '\0';
	return (ns);
}
