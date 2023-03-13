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

	if ((number * size) == 0)
		return ((void *)ft_strdup(""));
	if (size != 0 && number > (size_t)SIZE_MAX / size)
	{
		return (NULL);
	}
	p = malloc(number * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, number * size);
	return (p);
}
