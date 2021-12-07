/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:49:37 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/06 09:42:58 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{

int a;
a = 2;
int *p;
p = &a;
	printf("%d\n", a);
	ft_bzero(p, 1);	
	printf("%d\n", a);
	return (0);
}
*/
