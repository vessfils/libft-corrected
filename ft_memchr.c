/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:06:58 by vess              #+#    #+#             */
/*   Updated: 2021/11/28 11:49:20 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char s[3] = {'a', 'b', 'c'};

	printf("%s\n",((char *)ft_memchr(s, 'b', 3)));	

return (0);
}
*/
