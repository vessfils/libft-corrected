/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:22:30 by vess              #+#    #+#             */
/*   Updated: 2021/10/23 01:14:11 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s, char const *set)
{
	char	*new;
	int		start;
	int		end;

	new = 0;
	if (s && set)
	{
		start = 0;
		end = ft_strlen((char *)s);
		while (s[start] && ft_strchr(set, s[start]))
			start++;
		while (s[end - 1] && ft_strchr(set, s[end - 1]) && end > start)
			end--;
		new = (char *)malloc(sizeof(char) * (end - start + 1));
		if (new)
			ft_strlcpy(new, &s[start], end - start + 1);
	}
	return (new);
}
/*
#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));

return (0);
}
*/
