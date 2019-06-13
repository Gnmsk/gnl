/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:46 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/12 21:19:24 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (size + 1 < size)
		return (NULL);
	if (!(newstr = (char *)malloc(size + 1)))
		return (NULL);
	ft_bzero(newstr, size + 1);
	return (newstr);
}
