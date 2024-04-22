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

static void	copy_src_to_dst(char *dst, const char *src, size_t k, size_t size)
{
	size_t	l;

	l = 0;
	while (k < (size - 1) && src[l])
	{
		dst[k] = src[l];
		l++;
		k++;
	}
	dst[k] = '\0';
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	j = 0;
	k = ft_strlen(dst);
	if (k >= size)
	{
		j = ft_strlen(src);
		return (j + size);
	}
	copy_src_to_dst(dst, src, k, size);
	return (k + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[30];
// 	memset(dest, 0, 30);
// 	char *src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	printf("%zu", ft_strlcat(NULL, src, 0));
// }