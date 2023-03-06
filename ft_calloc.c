/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:41:12 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:41:34 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	p = malloc(number * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, number * size);
	return (p);
}

// #include <stdio.h>
// int main()
// {
// 	void *p = ft_calloc(18446744073709551615UL, 18446744073709551615UL);
// }