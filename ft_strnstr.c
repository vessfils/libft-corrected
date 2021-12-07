/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:14:30 by vess              #+#    #+#             */
/*   Updated: 2021/11/26 16:57:07 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (search[0] == 0)
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == search[j] && (i + j) < n && search[j])
		{
			if (search [j + 1] == 0)
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
