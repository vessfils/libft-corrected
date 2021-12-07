/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:01:55 by vess              #+#    #+#             */
/*   Updated: 2021/11/27 12:23:52 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

/*
int main ()
{
	char *str = "HELLO";
	int	i = 48;
	t_list *lst;

	lst = ft_lstnew(str);
	lst->next = ft_lstnew(&i);
	while (lst->next)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

}
*/
