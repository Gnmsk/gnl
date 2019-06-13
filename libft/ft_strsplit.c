/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:00:52 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 18:51:01 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	first;
	size_t	last;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	last = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1))))
		return (NULL);
	while (s[last] != '\0')
	{
		while (s[last] == c)
			last++;
		first = last;
		while (s[last] && s[last] != c)
			last++;
		if (last > first)
			str[i++] = ft_strndup(s + first, last - first);
	}
	str[i] = 0;
	return (str);
}
