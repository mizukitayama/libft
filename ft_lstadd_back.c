/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <mtayama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:36:53 by mtayama           #+#    #+#             */
/*   Updated: 2024/04/22 18:55:16 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

// #include <stdio.h>
// int main() {
// 	t_list* a;
// 	a = malloc(sizeof(t_list));
// 	a->content = "a";
// 	t_list* b;
// 	b = malloc(sizeof(t_list));
// 	b->content = "b";
// 	a->next = b;
// 	t_list *c;
// 	c = malloc(sizeof(t_list));
// 	c->content = "c";
// 	b->next = c;
// 	c->next = NULL;
// 	t_list *null = NULL;
// 	t_list *new;
// 	new = malloc(sizeof(t_list));
// 	new->content = "new";
// 	new->next = NULL;
// 	ft_lstadd_back(&null, new);
// 	t_list *ans = ft_lstlast(null);
// 	printf("%s", ans->content);
// }
