/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtayama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:44:25 by mtayama           #+#    #+#             */
/*   Updated: 2022/10/18 14:44:38 by mtayama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_needle;

	i = 0;
	size_needle = 0;
	while (needle[size_needle])
		size_needle++;
	while (haystack[i] && (len - size_needle + 1) > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == size_needle - 1)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
