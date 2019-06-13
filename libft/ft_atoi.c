/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:36:46 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/08 00:01:13 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int			sign;
	long long	num;

	num = 0;
	sign = 1;
	while ((*str == '\t' || *str == '\n' || *str == '\f') ||
			(*str == '\r' || *str == '\v' || *str == ' '))
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
		if ((num * 10) < num && sign > 0)
			return (-1);
		if ((num * 10) < num && sign < 0)
			return (0);
	}
	return (num * sign);
}
