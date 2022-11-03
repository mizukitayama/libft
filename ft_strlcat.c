/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:26:32 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/14 18:26:33 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(dst);
	if (k >= size)
	{
		j = ft_strlen(src);
		return (j + size);
	}
	i = k;
	j = 0;
	while (i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		j ++;
		i ++;
	}
	dst[i] = '\0';
	return (k + ft_strlen(src));
}
