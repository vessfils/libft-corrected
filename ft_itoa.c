/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:31:03 by vess              #+#    #+#             */
/*   Updated: 2021/11/26 17:47:26 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char		*str;
	long int	nbr;
	int			i;

	i = 0;
	str = 0;
	nbr = nb;
	str = (char *)malloc(sizeof(char) * ft_nbrlen(nb) + 1);
	if (!str)
		return (NULL);
	if (nbr < 0)
		str[0] = '-';
	if (nbr < 0)
		nbr = -nbr;
	str[ft_nbrlen(nb) - i++] = '\0';
	while (nbr >= 10)
	{
		str[ft_nbrlen(nb) - i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	str[ft_nbrlen(nb) - i++] = (nbr % 10) + 48;
	return (str);
}
