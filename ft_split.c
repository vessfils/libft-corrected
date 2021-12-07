/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:16:54 by vess              #+#    #+#             */
/*   Updated: 2021/11/28 12:04:01 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_panic(char **arr, int len)
{
	while (--len >= 0)
	{
		free(arr[len]);
	}
	free(arr);
	return (NULL);
}

static int	ft_count_words(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(const char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	i = 0;
	arr = 0;
	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) *(ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			arr[i] = malloc_word(s, c);
			if (!arr[i++])
				return (ft_panic(arr, i - 1));
			while (*s && *s != c)
				s++;
		}
	}
	arr[i] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main ()
{
char **arr;
char *str = "**Hello*samere*lapute**";
arr = ft_split(str, '*');
printf("%s\n",arr[0]);
printf("%s\n",arr[1]);
printf("%s\n",arr[2]);
return (0);
}
*/
