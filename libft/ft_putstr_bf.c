/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 17:56:25 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 18:18:48 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_bf(char *str, int n)
{
	static	char	buff[2000];
	static	int		i;

	if (n == 1)
	{
		write(1, &buff, i);
		return ;
	}
	while (*str)
	{
		if (i == 1999)
		{
			write(1, &buff, i);
			i = 0;
		}
		buff[i] = *str;
		i++;
		str++;
	}
}
