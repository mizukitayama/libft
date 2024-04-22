/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <mtayama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:32:18 by mtayama           #+#    #+#             */
/*   Updated: 2024/04/22 18:55:58 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
// 	t_list *ans = ft_lstlast(a);
// 	printf("%s", ans->content);
// }