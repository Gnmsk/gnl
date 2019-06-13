/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 18:44:19 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 18:49:51 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *src, size_t n)
{
	char	*str;

	if (!(str = (char *)malloc(n + 1)))
		return (NULL);
	str = ft_strncpy(str, src, n);
	str[n] = '\0';
	return (str);
}
