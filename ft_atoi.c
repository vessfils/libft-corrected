/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:49:37 by jcampagn          #+#    #+#             */
/*   Updated: 2021/11/28 11:56:28 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_outvalue(int neg)
{
	if (neg < 0)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	value;
	int					neg;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (value > value * 10 + str[i] + '0')
			return (ft_outvalue(neg));
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (neg * value);
}
