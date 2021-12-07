/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:00:27 by vess              #+#    #+#             */
/*   Updated: 2021/11/26 16:49:41 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	z;

	i = 0;
	n = ft_strlen(dest);
	z = ft_strlen(src);
	if (size < n)
		return (ft_strlen(src) + size);
	if (size > 0)
	{
		while (src[i] && i + n < size - 1)
		{
			dest[i + n] = src[i];
			i++;
		}
		dest[i + n] = 0;
	}
	return (n + z);
}
